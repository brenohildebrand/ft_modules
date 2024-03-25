/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_is_empty.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:30:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:30:58 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

t_i32	chain_is_empty(t_chain instance)
{
	if (instance->size == 0)
	{
		return (TRUE);
	}
	return (FALSE);
}
