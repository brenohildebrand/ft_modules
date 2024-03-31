/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_destroy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:42:08 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 19:04:42 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

void	any_destroy(t_any instance)
{
	if (instance == NULL)
	{
		return ;
	}
	else if (instance->type->is_value)
	{
		delete(instance);
	}
	else if (instance->type->destroy)
	{
		instance->type->destroy(instance->value.instance);
		delete(instance);
	}
	else
	{
		delete(instance);
	}
}
