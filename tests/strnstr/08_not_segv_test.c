/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_not_segv_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 19:34:09 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 19:44:21 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_not_segv_test()
{
	char	*heystack;
	char	*needle;

	heystack = NULL;
	needle = "cdf";
	if (strnstr(heystack, needle, 0) == ft_strnstr(heystack, needle, 0))
		return (0);
	else
		return (-1);
}
