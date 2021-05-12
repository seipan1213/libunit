/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_basic2_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:03:52 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 18:04:19 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_basic2_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcdeab";
	needle = "de";
	if (strnstr(heystack, needle, 10) == ft_strnstr(heystack, needle, 10))
		return (0);
	else
		return (-1);
}
