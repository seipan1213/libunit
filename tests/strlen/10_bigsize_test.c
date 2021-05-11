/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10_bigsize_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 15:41:26 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	bigsize_test(void)
{
	char str[20000];

	memset(str, 'a', 20000);
	str[19999] = '\0';
	if (strlen(str) == ft_strlen(str))
		return (0);
	else
		return (-1);
}
