/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_instance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/25 19:02:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/25 19:17:52 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	*any_to_instance(t_any instance)
{
	void	*another_instance;

	another_instance = instance->value.instance;
	delete(instance);
	return (another_instance);
}
