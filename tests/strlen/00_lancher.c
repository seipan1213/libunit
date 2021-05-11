/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:14:55 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int strlen_launcher(void)
{
	t_unit_test *tests;

	tests = NULL;
	puts("STRLEN:");
	load_test(&tests, "Basic test", &basic_test);
	load_test(&tests, "KO test", &ko_test);
	load_test(&tests, "Segv test", &segv_test);
	load_test(&tests, "Bus Err test", &bus_err_test);
	load_test(&tests, "Empty test", &empty_test);
	load_test(&tests, "Not Ascii test", &not_ascii_test);
	load_test(&tests, "Nullbyte test", &nullbyte_test);
	load_test(&tests, "Numeric test", &numeric_test);
	load_test(&tests, "Nonprintable test", &nonprintable_test);
	load_test(&tests, "Big size test", &bigsize_test);
	load_test(&tests, "Timeout test", &timeout_test);
	load_test(&tests, "Abort test", &abort_test);
	load_test(&tests, "Zero div test", &zero_div_test);
	load_test(&tests, "One test", &one_test);
	load_test(&tests, "Comb test", &comb_test);
	return(launch_tests(&tests));
}
