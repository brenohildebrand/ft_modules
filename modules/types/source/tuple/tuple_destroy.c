// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   tuple_destroy.c                                    :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2024/03/11 09:46:26 by bhildebr          #+#    #+#             */
// /*   Updated: 2024/03/11 18:50:09 by bhildebr         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "tuple.h"

// void	tuple_destroy(t_tuple instance)
// {
// 	t_i32	i;
// 	t_i32	size;
// 	t_map	tuple_map;

// 	if (instance == NULL)
// 		return ;
// 	tuple_map = tuple_get_map();
// 	size = any_as_i32(get(tuple_map, as_any(instance)));
// 	set(tuple_map, as_any(instance), NULL);
// 	if (get_length(tuple_map) == 0)
// 		destroy(tuple_map);
// 	i = 0;
// 	while (i < size)
// 	{
// 		any_destroy(instance[i]);
// 		i++;
// 	}
// 	deallocate(instance);
// }
