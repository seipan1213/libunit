/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_not_found_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:06:56 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 18:08:00 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_not_found1_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcdefge";
	needle = "cde";
	if (strnstr(heystack, needle, 4) == ft_strnstr(heystack, needle, 4))
		return (0);
	else
		return (-1);
}
