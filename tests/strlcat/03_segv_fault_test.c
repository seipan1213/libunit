/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_segv_fault_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tishigak <tishigak@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/09 23:20:58 by tishigak          #+#    #+#             */
/*   Updated: 2021/05/10 16:14:39 by tishigak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/tests.h"

int segv_fault_test(void)
{
	char *ptr;

	ptr = NULL;
	if (strlen(ptr) == ft_strlen(ptr))
		return (0);
	else
		return (-1);
}
