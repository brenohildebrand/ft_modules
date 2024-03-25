/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_as_any.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:33:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:33:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_any	list_as_any(t_list instance)
{
	t_any	converted_instance;

	converted_instance = create(any);
	converted_instance->type = list();
	converted_instance->value.instance = instance;
	return (converted_instance);
}
