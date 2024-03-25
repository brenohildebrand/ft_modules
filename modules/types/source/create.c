/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 01:50:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 15:57:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

/**
 * Creates a new instance of the given type by calling its create function.
 *
 * @param signature The type's signature function.
 * @return A new instance of the type.
 */
void *create(t_type (*signature)(void))
{
	t_type type;

	type = signature();
	assert(type->create != NULL, "Type does not have the create function.");
	return (type->create());
}
