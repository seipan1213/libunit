/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_nonprintable_test.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/11 12:56:59 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/11 17:57:35 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strlen.h"

int	strlen_nonprintable_test(void)
{
	if (strlen("\n\t\v") == ft_strlen("\n\t\v"))
		return (0);
	else
		return (-1);
}
