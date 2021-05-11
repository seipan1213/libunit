/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_nullbyte_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 13:02:41 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	nullbyte_test(void)
{
	if (strlen("aa\0bb") == ft_strlen("aa\0bb"))
		return (0);
	else
		return (-1);
}
