/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_update_height.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:54:48 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

void	typetree_update_height(t_typetree typetree)
{
	int	lheight;
	int	rheight;

	lheight = typetree_get_height(typetree->ltree);
	rheight = typetree_get_height(typetree->rtree);
	if (lheight > rheight)
	{
		typetree->height = 1 + lheight;
	}
	else
	{
		typetree->height = 1 + rheight;
	}
}
