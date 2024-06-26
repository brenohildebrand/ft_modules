/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_rebalance.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:54:35 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static void	left_rotate(t_typetree *typetree)
{
	t_typetree	y;
	t_typetree	x;
	t_typetree	b;

	y = *typetree;
	x = y->rtree;
	b = x->ltree;
	y->rtree = b;
	x->ltree = y;
	*typetree = x;
	typetree_update_height((*typetree)->ltree);
	typetree_update_height(*typetree);
}

static void	right_rotate(t_typetree *typetree)
{
	t_typetree	y;
	t_typetree	x;
	t_typetree	b;

	y = *typetree;
	x = y->ltree;
	b = x->rtree;
	y->ltree = b;
	x->rtree = y;
	*typetree = x;
	typetree_update_height((*typetree)->rtree);
	typetree_update_height(*typetree);
}

static void	rebalance_left(t_typetree *typetree)
{
	int	lgrandheight;
	int	rgrandheight;

	lgrandheight = typetree_get_height((*typetree)->ltree->ltree);
	rgrandheight = typetree_get_height((*typetree)->ltree->rtree);
	if (lgrandheight >= rgrandheight)
	{
		right_rotate(typetree);
	}
	else
	{
		left_rotate(&((*typetree)->ltree));
		right_rotate(typetree);
	}
}

static void	rebalance_right(t_typetree *typetree)
{
	int	lgrandheight;
	int	rgrandheight;

	lgrandheight = typetree_get_height((*typetree)->rtree->ltree);
	rgrandheight = typetree_get_height((*typetree)->rtree->rtree);
	if (rgrandheight >= lgrandheight)
	{
		left_rotate(typetree);
	}
	else
	{
		right_rotate(&((*typetree)->rtree));
		left_rotate(typetree);
	}
}

void	typetree_rebalance(t_typetree *typetree)
{
	int	lheight;
	int	rheight;

	if ((*typetree) == NULL)
		return ;
	lheight = typetree_get_height((*typetree)->ltree);
	rheight = typetree_get_height((*typetree)->rtree);
	if (lheight - rheight > 1)
		rebalance_left(typetree);
	else if (rheight - lheight > 1)
		rebalance_right(typetree);
	typetree_update_height(*typetree);
}
