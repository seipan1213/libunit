/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 22:52:14 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/10 16:14:50 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TEST_H
# define TEST_H

#include <string.h>
#include "../../framework/libunit.h"
#include "../../libft/libft.h"

int	strlen_launcher(void);
int basic_test(void);
int	ko_test(void);
int	segv_fault_test(void);
int	bus_err_test(void);

#endif
