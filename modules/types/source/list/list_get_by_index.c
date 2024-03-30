/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get_by_index.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 18:22:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 18:28:06 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"
#include "utils.h"

t_any	list_get_by_index(t_list instance, t_i32 index)
{
	if (index < 0)
	{
		index = instance->length + index;
	}
	if (index < 0)
	{
		print_to_stderr("No way! You can't access an index on a list that \
						is less than its negative length.");
		quit(1);
	}
	if (index >= instance->length)
	{
		return (NULL);
	}
	return (instance->content[instance->start + index]);
}
