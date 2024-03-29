/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 16:59:49 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:54:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

# include "types.h"

# define LIST_INITIAL_CAPACITY 16

typedef struct s_list	*t_list;

struct s_list {
	t_any	*content;
	t_i32	start;
	t_i32	end;
	t_i32	length;
	t_i32	size;
	t_i32	capacity;
};

t_type	list(void);
t_list	list_create(void);
void	list_destroy(t_list list);
void	list_expand(t_list instance);
void	list_push(t_list instance, t_any value);

#endif