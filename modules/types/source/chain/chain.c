/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 19:15:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 18:47:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "chain.h"

static void	init_type(t_type type)
{
	type->name = "chain";
	type->size = sizeof(struct s_chain);
	type->create = (t_create)chain_create;
	type->destroy = (t_destroy)chain_destroy;
	type->copy = (t_copy)chain_copy;
}

t_type	chain(void)
{
	static struct s_type	type;
	static t_i32			is_initialized = FALSE;
	
	if (!is_initialized)
	{
		init_type(&type);
		is_initialized = TRUE;
	}
	return (&type);
}
