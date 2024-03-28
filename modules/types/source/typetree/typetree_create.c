/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_create.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:53:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:55:11 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

t_typetree	typetree_create(t_type type, void *address)
{
	t_typetree	typetree;

	typetree = malloc(sizeof(struct s_typetree));
	if (typetree == NULL)
	{
		typetree_destroy();
		return (NULL);
	}
	typetree->height = 1;
	typetree->ltree = NULL;
	typetree->rtree = NULL;
	typetree->address = address;
	typetree->type = type;
	return (typetree);
}
