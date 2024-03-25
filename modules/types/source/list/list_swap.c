/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:19:21 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:22:21 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	list_swap(t_list instance, t_any key, t_any another_key)
{
	t_any	temp;
	t_i32	index;
	t_i32	another_index;

	index = any_to_i32(key);
	another_index = any_to_i32(another_key);
	if (index < 0)
		index = instance->length + index;
	if (another_index < 0)
		another_index = instance->length + another_index;
	if (index < 0 || index >= instance->length)
		error("No way! You can't swap an invalid index.");
	if (another_index < 0 || another_index >= instance->length)
		error("No way! You can't swap an invalid index.");
	temp = instance->content[instance->start + index];
	instance->content[instance->start + index] = \
		instance->content[instance->start + another_index];
	instance->content[instance->start + another_index] = temp;
}
