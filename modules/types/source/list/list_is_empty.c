/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_is_empty.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 21:14:38 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 21:15:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "list.h"

t_bool	list_is_empty(t_list instance)
{
	if (instance->size == 0)
	{
		return (TRUE);
	}
	return (FALSE);
}
