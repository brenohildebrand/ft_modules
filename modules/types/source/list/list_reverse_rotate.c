/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reverse_rotate.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 18:18:30 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 23:56:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_reverse_rotate(t_list instance)
{
	if (instance->length == 0)
		return ;
	list_push(instance, list_shift(instance));
}
