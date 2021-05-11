/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   12_abort_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 15:44:19 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	abort_test(void)
{
	abort();
	if (strlen("str") == ft_strlen("str"))
		return (0);
	else
		return (-1);
}
