/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   load_test.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sehattor <sehattor@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/10 17:22:01 by sehattor          #+#    #+#             */
/*   Updated: 2021/05/10 17:22:01 by sehattor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "framework.h"

t_unit_test		*create_unit(char *name, int (*func)(void))
{
	t_unit_test *unit;

	if (!(unit = malloc(sizeof(t_unit_test))))
		return (NULL);
	unit->func = func;
	unit->name = name;
	unit->next = NULL;
	return (unit);
}

void			addb_unit(t_unit_test **lst, t_unit_test *unit)
{
	t_unit_test *back;

	if (!lst || !unit)
		return ;
	if (!*lst)
		*lst = unit;
	else
	{
		back = *lst;
		while (back->next)
			back = back->next;
		back->next = unit;
	}
}

void			load_test(t_unit_test **lst, char *name, int (*func)(void))
{
	t_unit_test	*unit;

	unit = create_unit(name, func);
	addb_unit(lst, unit);
}
