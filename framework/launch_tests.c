/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehattor <sehattor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:50:53 by sehattor          #+#    #+#             */
/*   Updated: 2021/05/10 17:50:53 by sehattor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

static int			test_unit(t_unit_test *unit)
{
	pid_t	pid;
	int		status;

	pid = fork();
	if (pid == -1)
		return (0);
	else if (pid == 0)
		exit(unit->func());
	wait(&status);
	if (WIFEXITED(status))
		return (WEXITSTATUS(status));
	else if (WIFSIGNALED(status))
		return (WTERMSIG(status));
	return (256);
}

static void	print_status(int status)
{
	if (status == 0)
		printf("[OK]\n");
	else if (status == -1)
		printf("[KO]\n");
	else if (status == SIGSEGV)
		printf("[SEGV]\n");
	else if (status == SIGBUS)
		printf("[BUSE]\n");
}

int				launch_tests(t_unit_test **lst)
{
	t_unit_test	*unit;
	int			checked;
	int			success;
	int			status;

	success = 0;
	checked = 0;
	unit = *lst;
	while (unit)
	{
		status = test_unit(unit);
		printf("\t> %s : ", unit->name);
		print_status(status);
		if (status == 0)
			success++;
		checked++;
		unit = unit->next;
	}
	printf("\n%d/%d tests checked\n", success, checked);
	return (0);
}
