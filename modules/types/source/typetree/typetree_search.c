/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_search.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:54:42 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

static t_type	helper(t_typetree typetree, void *address)
{
	if (typetree->address == address)
		return (typetree->type);
	else if (address < typetree->address)
		return (helper(typetree->ltree, address));
	else if (address > typetree->address)
		return (helper(typetree->rtree, address));
	return (NULL);
}

t_type	typetree_search(void *address)
{
	t_typetree	*typetree;

	typetree = typetree_get();
	return (helper(*typetree, address));
}
