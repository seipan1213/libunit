/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   07_not_found2_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 18:09:17 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 18:09:19 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_not_found2_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcdefge";
	needle = "cdf";
	if (strnstr(heystack, needle, 10) == ft_strnstr(heystack, needle, 10))
		return (0);
	else
		return (-1);
}
