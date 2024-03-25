/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_rotate.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:11:54 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 23:56:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	list_rotate(t_list instance)
{
	if (instance->length == 0)
		return ;
	list_unshift(instance, list_pop(instance));
}
