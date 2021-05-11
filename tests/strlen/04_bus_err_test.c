/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_bus_err_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:21:50 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 19:00:33 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_bus_err_test(void)
{
	char	*ptr;

	ptr = "abcde";
	ptr[0] = '\0';
	if (strlen(ptr) == ft_strlen(ptr))
		return (0);
	else
		return (-1);
}
