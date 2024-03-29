/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring_to_i32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:48:40 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 21:32:34 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "utils.h"
#include "i64.h"
#include "i8.h"

t_i32	cstring_to_i32(t_cstring cstring)
{
	t_i32	i;
	t_i64	number;
	t_i32	signal;

	signal = 1;
	i = 0;
	while (i8_is_space(cstring[i]))
		i++;
	while (i8_is_signal(cstring[i]))
	{
		if (cstring[i] == '-')
			signal *= -1;
		i++;
	}
	number = 0;
	while (i8_is_digit(cstring[i]))
	{
		assert(i64_is_i32(number * signal), \
			"Oops! Invalid conversion from cstring to i32.\n");
		number = number * 10 + (cstring[i] - '0');
		i++;
	}
	assert(cstring[i] == '\0', \
		"Oops! Invalid conversion from cstring to i32.\n");
	return (number * signal);
}
