/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_delete.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/17 16:25:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static t_type	yet_another_helper(t_typetree *typetree)
{
	t_typetree	min_root;
	t_type		min_type;

	if ((*typetree)->ltree == NULL)
	{
		min_root = *typetree;
		min_type = min_root->type;
		*typetree = min_root->rtree;
		free(min_root);
	}
	else
	{
		min_type = yet_another_helper(&((*typetree)->ltree));
	}
	typetree_rebalance(typetree);
	return (min_type);
}

static void	*another_helper(t_typetree *typetree)
{
	t_typetree	min_root;
	void		*min_address;

	if ((*typetree)->ltree == NULL)
	{
		min_root = *typetree;
		min_address = min_root->address;
	}
	else
	{
		min_address = another_helper(&((*typetree)->ltree));
	}
	return (min_address);
}

static void	helper(t_typetree *typetree, void *address)
{
	t_typetree	old_root;

	if (*typetree == NULL)
		return ;
	else if ((*typetree)->address == address)
	{
		if ((*typetree)->rtree != NULL)
		{
			(*typetree)->address = another_helper(&((*typetree)->rtree));
			(*typetree)->type = yet_another_helper(&((*typetree)->rtree));
			free(address);
		}
		else
		{
			old_root = *typetree;
			*typetree = (*typetree)->ltree;
			free(old_root->address);
			free(old_root);
		}
	}
	else if (address < (*typetree)->address)
		helper(&((*typetree)->ltree), address);
	else if (address > (*typetree)->address)
		helper(&((*typetree)->rtree), address);
	typetree_rebalance(typetree);
}

void	typetree_delete(void *address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	helper(typetree, address);
}
