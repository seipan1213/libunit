/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:52:14 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 19:01:37 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRLEN_H
# define STRLEN_H

# include <string.h>
# include <stdlib.h>
# include "../../framework/framework.h"

int	strlen_basic_test(void);
int	strlen_ko_test(void);
int	strlen_segv_test(void);
int	strlen_bus_err_test(void);
int	strlen_empty_test(void);
int	strlen_not_ascii_test(void);
int	strlen_nullbyte_test(void);
int	strlen_numeric_test(void);
int	strlen_nonprintable_test(void);
int	strlen_bigsize_test(void);
int	strlen_timeout_test(void);
int	strlen_abort_test(void);
int	strlen_zero_div_test(void);
int	strlen_one_test(void);
int	strlen_comb_test(void);

#endif
