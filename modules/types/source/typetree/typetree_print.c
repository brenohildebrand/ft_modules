/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/11 20:16:59 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:54:33 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "typetree.h"
// #include <stdio.h>

// static void	helper(t_typetree typetree)
// {
// 	if (typetree == NULL)
// 		return ;
// 	if (typetree->ltree != NULL)
// 		helper(typetree->ltree);
// 	if (typetree->type)
// 		printf("address: %p\t\t - \ttype: %s\n",
// 				typetree->address, typetree->type->name);
// 	else
// 		printf("address: %p\t\t - \ttype: %s\n",
// 				typetree->address, "allocated");
// 	if (typetree->rtree != NULL)
// 		helper(typetree->rtree);	
// }
// void	typetree_print(void)
// {
// 	t_typetree	*typetree;
// 	typetree = typetree_get();
// 	printf("[typetree]\n");
// 	helper(*typetree);
// 	print("\n");
// }
