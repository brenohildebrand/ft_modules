/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any_create.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:41:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:41:40 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "types.h"
#include "any.h"

t_any	any_create(void)
{
	t_any	instance;

	instance = new(any);
	return (instance);
}
