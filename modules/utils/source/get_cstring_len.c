/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_cstring_len.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 23:50:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/27 23:59:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

t_u32	get_cstring_len(t_cstring cstring)
{
	t_u32	len;

	len = 0;
	while (cstring[len])
	{
		len++;
	}
	return (len);
}
