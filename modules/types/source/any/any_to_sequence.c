/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_to_sequence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:39:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 10:41:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	*any_to_sequence(t_any instance)
{
	void	*sequence;

	sequence = instance->value.sequence;
	any_destroy(instance);
	return (sequence);
}
