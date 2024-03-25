/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/07 13:08:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/13 15:46:30 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

void	list_print(t_list instance)
{
	t_i32	i;
	
	i = 0;
	while (i < instance->length)
	{
		if (i != 0)
		{
			write(1, " ", 1);
		}
		any_print(instance->content[instance->start + i]);
		i++;
	}
}
