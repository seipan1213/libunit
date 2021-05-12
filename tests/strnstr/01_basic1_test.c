/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 17:57:34 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 18:03:13 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_basic1_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcdeab";
	needle = "ab";
	if (strnstr(heystack, needle, 10) == ft_strnstr(heystack, needle, 10))
		return (0);
	else
		return (-1);
}
