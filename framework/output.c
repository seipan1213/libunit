/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   output_result.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 13:32:42 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 14:46:18 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

void	print_start(void)
{
	printf("*********************************\n");
	printf("** 42 - Unit Tests ****\n");
	printf("*********************************\n");
	g_fp = fopen("result.txt", "w");
	if (g_fp)
	{
		fprintf(g_fp, "*********************************\n");
		fprintf(g_fp, "** 42 - Unit Tests ****\n");
		fprintf(g_fp, "*********************************\n");
		fflush(g_fp);
	}
}

void	print_end(void)
{
	if (g_fp)
		fclose(g_fp);
}

void	print_funcname(char *func_name)
{
	printf("%s:\n", func_name);
	if (g_fp)
	{
		fprintf(g_fp, "%s:\n", func_name);
		fflush(g_fp);
	}
}

void	print_result(int success, int checked)
{
	if (g_fp)
		fprintf(g_fp, "\n%d/%d tests checked\n", success, checked);
}

void	print_report(int test_num, char *test_name, int status)
{
	if (g_fp)
	{
		fprintf(g_fp, "\t%2d> %-20s : ", test_num, test_name);
		if (status == 0)
			fprintf(g_fp, "[OK]\n");
		else if (status == -1)
			fprintf(g_fp, "[KO]\n");
		else if (status == SIGSEGV)
			fprintf(g_fp, "[SEGV]\n");
		else if (status == SIGBUS)
			fprintf(g_fp, "[BUSE]\n");
		else if (status == SIGABRT)
			fprintf(g_fp, "[ABRT]\n");
		else if (status == SIGFPE)
			fprintf(g_fp, "[FPE]\n");
		else if (status == SIGKILL)
			fprintf(g_fp, "[TLE]\n");
		else
			fprintf(g_fp, "[ERR]\n");
		fflush(g_fp);
	}
}
