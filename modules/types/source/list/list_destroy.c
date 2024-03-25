/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_destroy.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/19 01:09:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/22 22:29:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

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
