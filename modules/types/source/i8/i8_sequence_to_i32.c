/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_sequence_to_i32.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:37:28 by bhildebr          #+#    #+#             */
/*   Updated: 2024/02/29 19:47:04 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "i8.h"

t_i32	i8_sequence_to_i32(t_i8	*sequence)
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
			error("Oops! Invalid conversion from i8_sequence to i32.");
		number = number * 10 + (sequence[i] - '0');
		i++;
	}
	if (sequence[i] != '\0')
		error("Oops! Invalid conversion from i8_sequence to i32.");
	return (number * signal);
}
