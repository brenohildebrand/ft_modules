/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/10 11:57:33 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/14 00:02:01 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

// -- The list type represents a list of anything. Under the hood it's a
// -- dynamic array 

/*
	The list type represents a list of anything. Under the hood it's a dynamic
	array that can hold any type.
*/

// The list type represents a list of anything. Under the hood it's a dynamic
// array of pointers to t_any.

// -- Represents a list of anything. Under the hood it's a dynamic arrray
// -- that can hold any type, including multiple different types.

# define LIST_INITIAL_CAPACITY (16)

typedef struct s_list	*t_list;

struct s_list {
	t_any	*content;
	int		start;
	int		end;
	int		length;
	int		size;
	int		capacity;
};

t_type	list(void);
t_list	list_create(void);
void	list_destroy(t_list instance);
t_list	list_copy(t_list instance);
t_i32	list_compare(t_list instance, t_list another_instance);
t_any	list_get(t_list instance, t_any key);
void	list_set(t_list instance, t_any key, t_any value);
void	list_push(t_list instance, t_any value);
t_any	list_pop(t_list instance);
void	list_unshift(t_list instance, t_any value);
t_any	list_shift(t_list instance);
void	list_rotate(t_list instance);
void	list_reverse_rotate(t_list instance);
void	list_swap(t_list instance, t_any key, t_any another_key);
void	list_print(t_list instance);
void	list_for_each(t_list instance, void (*callback)(t_any, int));
t_any	list_reduce(t_list instance, t_any accumulator, t_any (*callback)(t_any, t_any, int));
void	list_sort(t_list instance);
int		list_get_length(t_list instance);
t_i32	list_is_sorted(t_list instance);
t_any	list_to_any(t_list instance);

void	list_reverse(t_list instance);
void	list_expand(t_list instance);
void	list_resize(t_list instance, t_any size);
void	list_inflate(t_list instance);

#endif