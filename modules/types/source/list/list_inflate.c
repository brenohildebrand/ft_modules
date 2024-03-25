/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_inflate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/12 12:05:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 15:43:50 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_inflate(t_list instance)
{
	t_i32	i;

	i = 0;
	while (i < instance->length)
	{
		instance->content[i] = instance->content[instance->start + i];
		instance->content[instance->start + i] = NULL;
		i++;
	}
	instance->start = 0;
	instance->end = instance->length;
	instance->length = instance->capacity;
}
