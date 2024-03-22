/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   multiply.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/21 17:17:53 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/22 13:05:38 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "add.h"

int	multiply(int a, int b)
{
	int	result;

	result = 0;
	while (a--)
	{
		result = add(result, b);
	}
	return (result);
}
