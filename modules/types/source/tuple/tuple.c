// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   tuple.c                                            :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/03/11 09:21:18 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/03/11 20:34:40 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "tuple.h"

// static void	init_type(t_type type)
// {
// 	type->name = "tuple";
// 	type->size = sizeof(t_any *);
// 	type->create = (void *(*)(void))tuple_create;
// 	type->destroy = (void (*)(void *))tuple_destroy;
// 	// type->copy = (void *(*)(void *))tuple_copy;
// 	type->init = (void *(*)(void *, t_any))tuple_init;
// 	type->is_instance = 1;
// 	type->as_any = (t_any (*)(void *))tuple_as_any;
// }

// t_type	tuple(void)
// {
// 	static struct s_type	type;
// 	static t_i32			is_initialized = 0;

// 	if (!is_initialized)
// 	{
// 		init_type(&type);
// 		is_initialized = 1;	
// 	}
// 	return (&type);
// }
