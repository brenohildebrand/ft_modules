/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_sequence_to_any.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:52:26 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 19:53:55 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i8.h"

t_any	i8_sequence_to_any(t_i8 *sequence)
{
	t_any	instance;

	instance = create(any);
	instance->type = i8_sequence();
	instance->value.sequence = sequence;
	return (instance);	
}
