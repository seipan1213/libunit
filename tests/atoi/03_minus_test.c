/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_minus_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 17:44:26 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:59:08 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_minus_test(void)
{
	if (atoi("-12345") == ft_atoi("-12345"))
		return (0);
	else
		return (-1);
}
