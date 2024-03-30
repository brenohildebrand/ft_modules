/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_get.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 02:02:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 02:05:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"
#include "any.h"
#include "utils.h"

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
		print_to_stdout("No way! You can't access an index on a list that is less than its negative length.");
		quit(1);
	}
	if (index >= instance->length)
		return (NULL);
	return (instance->content[instance->start + index]);
}