/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   09_not_search_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42toky...>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/12 19:50:16 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/12 19:50:45 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "strnstr.h"

int	strnstr_not_search_test()
{
	char	*heystack;
	char	*needle;

	heystack = "abcde";
	needle = "a";
	if (strnstr(heystack, needle, 0) == ft_strnstr(heystack, needle, 0))
		return (0);
	else
		return (-1);
}
