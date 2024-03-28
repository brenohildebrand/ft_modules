/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   safe_malloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/09 22:47:06 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 00:48:03 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memtree.h"

void	*safe_malloc(unsigned int size)
{
	void			*address;
	unsigned int	i;

	address = malloc(size);
	if (address == NULL)
	{
		memtree_destroy();
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		((unsigned char *)address)[i] = 0;
		i++;
	}
	memtree_insert(NULL, address);
	return (address);
}
