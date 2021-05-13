/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty1_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:05:19 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 19:37:32 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_empty1_test()
{
	char	*heystack;
	char	*needle;

	heystack = "";
	needle = "ab";
	if (strnstr(heystack, needle, 10) == ft_strnstr(heystack, needle, 10))
		return (0);
	else
		return (-1);
}
