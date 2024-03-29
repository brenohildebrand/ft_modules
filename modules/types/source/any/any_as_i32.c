/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_as_i32.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 21:28:04 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 21:28:16 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"

t_i32	any_as_i32(t_any instance)
{
	return (instance->value.i32);
}
