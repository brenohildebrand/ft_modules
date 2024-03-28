/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:14:23 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:52:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "utils.h"

t_pointer	create(t_type (*signature)(void))
{
	t_type	type;

	type = signature();
	assert(type != NULL, "Instance does not have a type.");
	assert(type->create != NULL, "Type does not have the create function.");
	return (type->create());
}
