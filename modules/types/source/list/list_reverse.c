/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_reverse.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/06 16:04:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_reverse(t_list list)
{
	int	i;

	i = 0;
	while (i < list->length)
	{
		list_push(list, list_shift(list));
		i++;
	}
}
