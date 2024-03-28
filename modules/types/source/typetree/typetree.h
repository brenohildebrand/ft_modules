/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   typetree.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 19:27:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 05:50:29 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPETREE_H
# define TYPETREE_H

# include <stdlib.h>

typedef struct s_type		*t_type;
struct						s_type;

typedef struct s_typetree	*t_typetree;

struct s_typetree {
	t_typetree		ltree;
	t_typetree		rtree;
	void			*address;
	t_type			type;
	int				height;
};

t_typetree	*typetree_get(void);
t_typetree	typetree_create(t_type type, void *address);
void		typetree_destroy(void);
void		typetree_insert(t_type type, void *address);
void		typetree_delete(void *address);
void		typetree_rebalance(t_typetree *typetree);
void		typetree_update_height(t_typetree typetree);
int			typetree_get_height(t_typetree typetree);
t_type		typetree_search(void *address);

#endif