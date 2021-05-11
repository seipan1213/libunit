/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   13_zero_div_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:49 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_zero_div_test(void)
{
	int	a;
	int	zero;

	zero = 0;
	a = 10 / zero;
	if (strlen("str") == ft_strlen("str"))
		return (0);
	else
		return (-1);
}
