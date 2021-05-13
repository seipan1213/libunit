/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 19:51:11 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_launcher(void)
{
	t_unit_test	*tests;

	tests = NULL;
	print_funcname("STRNSTR");
	load_test(&tests, "Basic1 test", &strnstr_basic1_test);
	load_test(&tests, "Basic2 test", &strnstr_basic2_test);
	load_test(&tests, "Basic3 test", &strnstr_basic3_test);
	load_test(&tests, "Empty1 test", &strnstr_empty1_test);
	load_test(&tests, "Empty2 test", &strnstr_empty2_test);
	load_test(&tests, "Not found1 test", &strnstr_not_found1_test);
	load_test(&tests, "Not found2 test", &strnstr_not_found2_test);
	load_test(&tests, "Not segv test", &strnstr_not_segv_test);
	load_test(&tests, "Not search test", &strnstr_not_search_test);
	return (launch_tests(&tests));
}
