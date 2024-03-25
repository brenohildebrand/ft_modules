/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_node_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:50:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 18:51:48 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

void	chain_node_destroy(t_chain_node instance)
{
	if (instance == NULL)
		return ;
	if (instance->value)
	{
		any_destroy(instance->value);
	}
	delete(instance);
}
