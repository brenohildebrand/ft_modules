/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   allocate.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 09:28:39 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 09:45:53 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "typetree.h"

void	*allocate(unsigned int size)
{
	void			*address;
	unsigned int	i;

	address = malloc(size);
	if (address == NULL)
	{
		typetree_destroy();
		exit(1);
	}
	i = 0;
	while (i < size)
	{
		((unsigned char *)address)[i] = 0;
		i++;
	}
	typetree_insert(NULL, address);
	return (address);
}
