/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 18:59:28 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = NULL;
	puts("ATOI:");
	load_test(&tests, "Basic test", &atoi_basic_test);
	load_test(&tests, "Zero test", &atoi_zero_test);
	load_test(&tests, "Minus test", &atoi_minus_test);
	load_test(&tests, "Max test", &atoi_max_test);
	load_test(&tests, "Min test", &atoi_min_test);
	return (launch_tests(&tests));
}
