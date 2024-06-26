/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8_is_signal.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:47:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 16:47:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_bool	i8_is_signal(t_i8 value)
{
	return (value == '+' || value == '-');
}
