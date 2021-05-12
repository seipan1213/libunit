/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   launch_tests.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehattor <sehattor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:50:53 by sehattor          #+#    #+#             */
/*   Updated: 2021/05/12 13:28:18 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

static void	timer_handler(int pid)
{
	if (pid != g_fw_child_pid)
		kill(g_fw_child_pid, SIGKILL);
}

static int	test_unit(t_unit_test *unit)
{
	pid_t	pid;
	int		status;

	signal(SIGALRM, timer_handler);
	pid = fork();
	g_fw_child_pid = pid;
	if (pid == -1)
		exit_func();
	else if (pid == 0)
		exit(unit->func());
	alarm(2);
	wait(&status);
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 255)
			return (-1);
		else
			return (WEXITSTATUS(status));
	}
	else if (WIFSIGNALED(status))
		return (WTERMSIG(status));
	return (300);
}

static void	print_status(int status)
{
	if (status == 0)
		printf("\x1b[32m[OK]\x1b[39m\n");
	else if (status == -1)
		printf("\x1b[31m[KO]\x1b[39m\n");
	else if (status == SIGSEGV)
		printf("\x1b[31m[SEGV]\x1b[39m\n");
	else if (status == SIGBUS)
		printf("\x1b[31m[BUSE]\x1b[39m\n");
	else if (status == SIGABRT)
		printf("\x1b[31m[ABRT]\x1b[39m\n");
	else if (status == SIGFPE)
		printf("\x1b[31m[FPE]\x1b[39m\n");
	else if (status == SIGKILL)
		printf("\x1b[31m[TLE]\x1b[39m\n");
	else
		printf("\x1b[31m[ERR]\x1b[39m\n");
}

static void	free_units(t_unit_test **lst)
{
	t_unit_test	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
	*lst = NULL;
	return ;
}

int	launch_tests(t_unit_test **lst)
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
		printf("\t\x1b[36m%d\x1b[39m> %s : ", checked + 1, unit->name);
		print_status(status);
		if (status == 0)
			success++;
		checked++;
		unit = unit->next;
	}
	free_units(lst);
	printf("\n%d/%d tests checked\n", success, checked);
	free_units(lst);
	if (checked == success)
		return (0);
	else
		return (-1);
}
