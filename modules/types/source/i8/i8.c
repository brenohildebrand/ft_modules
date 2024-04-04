/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/04 15:48:51 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/04 15:49:54 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "i8.h"

t_type	i8(void)
{
	static struct s_type	type = {
		.name = "i8",
		.size = sizeof(t_i8),
		.is_value = TRUE
	};

	return (&type);
}
