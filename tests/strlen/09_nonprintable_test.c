/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_nonprintable_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 15:39:07 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int	nonprintable_test(void)
{
	if (strlen("\n\t\v") == ft_strlen("\n\t\v"))
		return (0);
	else
		return (-1);
}
