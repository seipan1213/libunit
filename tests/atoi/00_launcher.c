/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:54:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 15:57:24 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_launcher(void)
{
	t_unit_test	*tests;

	tests = NULL;
	print_funcname("ATOI");
	load_test(&tests, "Basic test", &atoi_basic_test);
	load_test(&tests, "Zero test", &atoi_zero_test);
	load_test(&tests, "Minus test", &atoi_minus_test);
	load_test(&tests, "Max test", &atoi_max_test);
	load_test(&tests, "Min test", &atoi_min_test);
	load_test(&tests, "Long max test", &atoi_longmax_test);
	load_test(&tests, "Long min test", &atoi_longmin_test);
	load_test(&tests, "Long over test", &atoi_longover_test);
	load_test(&tests, "Long under test", &atoi_longunder_test);
	load_test(&tests, "Sign test", &atoi_sign_test);
	load_test(&tests, "Space test", &atoi_space_test);
	load_test(&tests, "Comb test", &atoi_comb_test);
	load_test(&tests, "Notnum test", &atoi_notnum_test);
	load_test(&tests, "Notnum2 test", &atoi_notnum2_test);
	load_test(&tests, "Empty test", &atoi_empty_test);
	return (launch_tests(&tests));
}
