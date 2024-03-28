/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   assert.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 00:00:58 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 09:40:39 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	assert(t_bool condition, t_cstring error_message)
{
	if (condition == FALSE)
	{
		print_to_stderr(error_message);
		quit(1);
	}
}
