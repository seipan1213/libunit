/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_longmin_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:58:53 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 15:58:58 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_longmin_test(void)
{
	if (atoi("-9223372036854775808") == ft_atoi("-9223372036854775808"))
		return (0);
	else
		return (-1);
}
