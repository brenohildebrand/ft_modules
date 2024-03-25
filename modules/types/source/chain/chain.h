/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   chain.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 01:02:12 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/20 13:03:28 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHAIN_H
# define CHAIN_H

typedef struct s_any		*t_chain;
typedef struct s_any		*t_chain_node;

// typedef struct s_chain		*t_chain;
// typedef struct s_chain_node	*t_chain_node;

struct s_chain {
	t_chain_node	head;
	t_chain_node	tail;
	t_i32			size;
	t_i32			length;
};

struct s_chain_node {
	t_any			value;
	t_chain_node	next;
	t_chain_node	previous;
};

t_type			chain(void);
t_chain			chain_create(void);
void			chain_destroy(t_chain instance);
t_chain			chain_copy(t_chain instance);
t_i32			chain_compare(t_chain instance, t_chain another_instance);
void			chain_push(t_chain instance, t_any value);
t_any			chain_pop(t_chain instance);
void			chain_unshift(t_chain instance, t_any value);
t_any			chain_shift(t_chain instance);
void			chain_insert(t_chain instance, t_any key, t_any value);
t_any			chain_remove(t_chain instance, t_any key);
void			chain_assign(t_chain instance, t_any value, t_i32 index);
t_any			chain_retrieve(t_chain instance, t_i32 index);
void			chain_rotate(t_chain instance);
void			chain_reverse_rotate(t_chain instance);
void			chain_swap(t_chain instance, t_any key, t_any another_key);
void			chain_print(t_chain instance);
void			chain_sort(t_chain instance);
void			chain_reverse_sort(t_chain instance);
void			chain_for_each(t_chain instance, void (*callback)(t_any, t_i32));
void			chain_for_each_with_data(
					t_chain instance,
					void (*callback)(t_any, t_i32, void *),
					void *data);
void			chain_reduce(
					t_chain instance,
					t_any accumulator,
					t_any (*callback)(t_any, t_any, t_i32));
void			chain_reduce_with_data(
					t_chain instance,
					t_any accumulator,
					t_any (*callback)(t_any, t_any, t_i32, void *),
					void *data);
t_i32			chain_is_empty(t_chain instance);
t_i32			chain_is_full(t_chain instance);
t_i32			chain_is_sorted(t_chain instance);
t_i32			chain_is_reverse_sorted(t_chain instance);
t_i32			chain_get_length(t_chain instance);
t_i32			chain_get_size(t_chain instance);
t_any			chain_to_any(t_chain instance);
t_any			chain_as_any(t_chain instance);

t_type			chain_node(void);
t_chain_node	chain_node_create(void);
void			chain_node_destroy(t_chain_node instance);
t_chain_node	chain_node_copy(t_chain_node instance);

#endif