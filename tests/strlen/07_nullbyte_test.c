/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_nullbyte_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:29 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_nullbyte_test(void)
{
	if (strlen("aa\0bb") == ft_strlen("aa\0bb"))
		return (0);
	else
		return (-1);
}
