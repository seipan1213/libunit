/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_max_test.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:44:26 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:59:11 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_max_test(void)
{
	if (atoi("2147483647") == ft_atoi("2147483647"))
		return (0);
	else
		return (-1);
}
