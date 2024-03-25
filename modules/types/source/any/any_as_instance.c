/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_as_instance.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:50:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 10:50:18 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	*any_as_instance(t_any instance)
{
	return (instance->value.instance);
}
