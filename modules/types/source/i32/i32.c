/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:59:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:59:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "i32.h"

t_type	i32(void)
{
	static struct s_type	type = {
		.name = "i32",
		.size = sizeof(t_i32),
		.is_value = TRUE
	};

	return (&type);
}
