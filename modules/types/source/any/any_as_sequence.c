/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_as_sequence.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 10:49:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 10:49:51 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "any.h"

void	*any_as_sequence(t_any instance)
{
	return (instance->value.sequence);
}
