/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_comb_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:13:49 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	comb_test(void)
{
	if (strlen("str\t\200\ngarg\0gaerga") == ft_strlen("str\t\200\ngarg\0gaerga"))
		return (0);
	else
		return (-1);
}
