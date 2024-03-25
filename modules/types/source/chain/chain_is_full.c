/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_is_full.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:31:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:31:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_is_full(t_chain instance)
{
	if (instance->size == instance->length)
	{
		return (TRUE);
	}
	return (FALSE);
}
