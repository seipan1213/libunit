/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strnstr.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 19:35:06 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 19:51:31 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRNSTR_H
# define STRNSTR_H

# include <string.h>
# include <stdlib.h>
# include "../../framework/framework.h"

int	strnstr_basic1_test(void);
int	strnstr_basic2_test(void);
int	strnstr_basic3_test(void);
int	strnstr_empty1_test(void);
int	strnstr_empty2_test(void);
int	strnstr_not_found1_test(void);
int	strnstr_not_found2_test(void);
int	strnstr_not_segv_test(void);
int	strnstr_not_search_test(void);

#endif
