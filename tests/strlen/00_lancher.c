/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_lancher.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 12:38:27 by tishigak         ###   ########.fr       */
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
	return(launch_tests(&tests));
}
