/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain_to_any.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 01:38:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 01:39:56 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"
#include "any.h"

t_any	chain_to_any(t_chain instance)
{
	t_any	new_instance;

	new_instance = any_create();
	new_instance->type = chain();
	new_instance->value.instance = instance;
	return (new_instance);	
}
