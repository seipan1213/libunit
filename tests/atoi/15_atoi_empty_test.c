/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_atoi_empty_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 15:51:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 15:51:40 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi.h"

int	atoi_empty_test(void)
{
	if (atoi("") == ft_atoi(""))
		return (0);
	else
		return (-1);
}
