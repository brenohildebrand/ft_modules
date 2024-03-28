/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:20:19 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:42:35 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"
#include "any.h"

void	list_destroy(t_list instance)
{
	int	i;

	if (instance == NULL)
		return ;
	i = instance->start;
	while (i <= instance->end)
	{
		any_destroy(instance->content[i]);
		i++;
	}
	deallocate(instance->content);
	delete(instance);
}
