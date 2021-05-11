/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   15_comb_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:55 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_comb_test(void)
{
	if (strlen("str\t\200\ngarg\0gaerga") == ft_strlen("str\t\200\ngarg\0gaerga"))
		return (0);
	else
		return (-1);
}
