/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   08_numeric_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:32 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_numeric_test(void)
{
	if (strlen("0123456789") == ft_strlen("0123456789"))
		return (0);
	else
		return (-1);
}
