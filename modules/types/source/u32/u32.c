/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   u32.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:35:22 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 19:57:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "u32.h"

t_type	u32(void)
{
	static struct s_type	type = {
		.name = "u32",
		.size = sizeof(t_u32),
		.is_value = 1
	};

	return (&type);
}
