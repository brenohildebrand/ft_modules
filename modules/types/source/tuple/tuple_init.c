// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   tuple_init.c                                       :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/03/11 09:39:05 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/03/11 21:23:29 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "tuple.h"

// t_tuple	tuple_init(t_tuple instance, t_any value)
// {
// 	t_i32	number_of_elements;
// 	t_map	tuple_map;

// 	tuple_map = tuple_get_map();
// 	number_of_elements = any_to_i32(value);
// 	*instance = allocate(number_of_elements * sizeof(t_any));
// 	set(tuple_map, as_any(instance), i32_to_any(number_of_elements));
// 	return (instance);
// }
