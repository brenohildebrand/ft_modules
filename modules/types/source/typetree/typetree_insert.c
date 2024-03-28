/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 15:35:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	helper(t_typetree *typetree, t_type type, void *address)
{
	if (*typetree == NULL)
	{
		*typetree = typetree_create(type, address);
	}
	else if (address == (*typetree)->address)
	{
		return ;
	}
	else
	{
		if (address < (*typetree)->address)
		{
			helper(&((*typetree)->ltree), type, address);
		}
		else
		{
			helper(&((*typetree)->rtree), type, address);
		}
		typetree_rebalance(typetree);
	}
}

void	typetree_insert(t_type type, void *address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	helper(typetree, type, address);
}
