/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:52:14 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:13:54 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <string.h>
#include "../../framework/framework.h"

int	strlen_launcher(void);
int basic_test(void);
int	ko_test(void);
int	segv_test(void);
int	bus_err_test(void);
int	empty_test(void);
int	not_ascii_test(void);
int	nullbyte_test(void);
int	numeric_test(void);
int	nonprintable_test(void);
int	bigsize_test(void);
int	timeout_test(void);
int	abort_test(void);
int	zero_div_test(void);
int	one_test(void);
int	comb_test(void);

#endif
