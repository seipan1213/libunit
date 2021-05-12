/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:52:14 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 15:54:20 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATOI_H
# define ATOI_H

# include <string.h>
# include <stdlib.h>
# include <limits.h>
# include "../../framework/framework.h"

int	atoi_basic_test(void);
int	atoi_zero_test(void);
int	atoi_minus_test(void);
int	atoi_max_test(void);
int	atoi_min_test(void);
int	atoi_longmax_test(void);
int	atoi_longmin_test(void);
int	atoi_longover_test(void);
int	atoi_longunder_test(void);
int	atoi_sign_test(void);
int	atoi_space_test(void);
int	atoi_comb_test(void);
int	atoi_notnum_test(void);
int	atoi_notnum2_test(void);
int	atoi_empty_test(void);

#endif
