/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring_is_i32.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:41:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/04 14:34:31 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "cstring.h"
#include "i8.h"
#include "i64.h"

t_bool	cstring_is_i32(t_cstring cstring)
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
		number = number * 10 + (cstring[i] - '0');
		if (!i64_is_i32(number * signal))
			return (0);
		i++;
	}
	if (cstring[i] != '\0')
		return (0);
	return (1);
}
