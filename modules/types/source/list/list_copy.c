/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_copy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 01:31:10 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 01:31:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"
#include "any.h"

static void	copy_content(t_list instance, t_list new_instance)
{
	int	i;

	while (new_instance->capacity < instance->capacity)
	{
		list_expand(new_instance);
	}
	i = 0;
	while (i < instance->capacity)
	{
		if (instance->content[i])
			new_instance->content[i] = any_copy(instance->content[i]);
		i++;
	}
}

t_list	list_copy(t_list instance)
{
	t_list	new_instance;

	new_instance = create(list);
	copy_content(instance, new_instance);
	new_instance->start = instance->start;
	new_instance->end = instance->end;
	new_instance->size = instance->size;
	new_instance->length = instance->length;
	new_instance->capacity = instance->capacity;
	return (new_instance);
}
