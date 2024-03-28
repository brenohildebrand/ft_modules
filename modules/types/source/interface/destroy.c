/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   destroy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:16:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:53:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "typetree.h"
#include "utils.h"

void	destroy(void *instance)
{
	t_type	type;

	type = typetree_search(instance);
	assert(type != NULL, "Instance does not have a type.");
	assert(type->destroy != NULL, "Type does not have the destroy function.");
	type->destroy(instance);
}
