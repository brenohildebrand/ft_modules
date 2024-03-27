/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 17:00:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/27 17:02:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "list.h"

t_type	list(void)
{
	static struct s_type	type = {
		.name = "list",
		.size = sizeof(struct s_list);
	};

	return (&type);
}
