/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_rotate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 00:47:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 00:48:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_rotate(t_chain instance)
{
	if (instance->length <= 1)
		return ;
	chain_unshift(instance, chain_pop(instance));
}
