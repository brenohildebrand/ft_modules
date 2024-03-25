/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 13:44:17 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:43 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_get(t_list instance, t_any key)
{
	t_i32	index;
	
	index = any_to_i32(key);
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0)
	{
		error("No way! You can't access an index on a list that is less than its negative length.");
	}
	if (index >= instance->length)
		return (NULL);
	return (instance->content[instance->start + index]);
}
