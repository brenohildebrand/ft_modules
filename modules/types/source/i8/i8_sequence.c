/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_sequence.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:54:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 19:56:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i8.h"

t_type	i8_sequence(void)
{
	static struct s_type	type = {
		.name = "i8_sequence",
		.size = sizeof(t_i8 *),
		.is_sequence = 1
	};

	return (&type);
}
