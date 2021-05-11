/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   11_timeout_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:41 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_timeout_test(void)
{
	while (1)
		;
	if (strlen("str") == ft_strlen("str"))
		return (0);
	else
		return (-1);
}
