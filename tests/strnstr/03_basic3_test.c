/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_basic3_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:04:41 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 18:04:55 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_basic3_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcdeab";
	needle = "eab";
	if (strnstr(heystack, needle, 10) == ft_strnstr(heystack, needle, 10))
		return (0);
	else
		return (-1);
}
