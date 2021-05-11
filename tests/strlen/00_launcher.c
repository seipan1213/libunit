/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:56:22 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int strlen_launcher(void)
{
	t_unit_test *tests;

	tests = NULL;
	puts("STRLEN:");
	load_test(&tests, "Basic test", &strlen_basic_test);
	load_test(&tests, "KO test", &strlen_ko_test);
	load_test(&tests, "Segv test", &strlen_segv_test);
	load_test(&tests, "Bus Err test", &strlen_bus_err_test);
	load_test(&tests, "Empty test", &strlen_empty_test);
	load_test(&tests, "Not Ascii test", &strlen_not_ascii_test);
	load_test(&tests, "Nullbyte test", &strlen_nullbyte_test);
	load_test(&tests, "Numeric test", &strlen_numeric_test);
	load_test(&tests, "Nonprintable test", &strlen_nonprintable_test);
	load_test(&tests, "Big size test", &strlen_bigsize_test);
	load_test(&tests, "Timeout test", &strlen_timeout_test);
	load_test(&tests, "Abort test", &strlen_abort_test);
	load_test(&tests, "Zero div test", &strlen_zero_div_test);
	load_test(&tests, "One test", &strlen_one_test);
	load_test(&tests, "Comb test", &strlen_comb_test);
	return(launch_tests(&tests));
}
