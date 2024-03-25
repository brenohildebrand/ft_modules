/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_sequence_is_i32.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 11:02:03 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/01 11:05:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i8.h"

t_i32	i8_sequence_is_i32(t_i8 *sequence)
{
	t_i32	i;
	t_i64	number;
	t_i32	signal;

	signal = 1;
	i = 0;
	while (i8_is_space(sequence[i]))
		i++;
	while (i8_is_signal(sequence[i]))
	{
		if (sequence[i] == '-')
			signal *= -1;
		i++;
	}
	number = 0;
	while (i8_is_digit(sequence[i]))
	{
		if (!i64_is_i32(number * signal))
			return (0);
		number = number * 10 + (sequence[i] - '0');
		i++;
	}
	if (sequence[i] != '\0')
		return (0);
	return (1);
}
