/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/22 02:09:13 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/25 04:44:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# define TRUE (1)
# define FALSE (0)

typedef struct s_any			*t_any;
struct							s_any;

typedef unsigned char			t_u8;
typedef char					t_i8;

typedef unsigned int			t_u32;
typedef int						t_i32;

typedef unsigned long long int	t_u64;
typedef long long int			t_i64;

typedef double					t_f64;

typedef struct s_string			*t_string;
struct							s_string;

typedef struct s_chain			*t_chain;
struct							s_chain;

typedef struct s_list			*t_list;
struct							s_list;

typedef struct s_map			*t_map;
struct							s_map;

typedef t_any					*t_tuple;

typedef struct s_type			*t_type;

typedef void					*(*t_create)(void);
typedef void					(*t_destroy)(void *);
typedef void					*(*t_copy)(void *);
typedef t_i32					(*t_compare)(void *, void *);
typedef void					(*t_push)(void *, t_any);
typedef t_any					(*t_pop)(void *);
typedef void					(*t_unshift)(void *, t_any);
typedef t_any					(*t_shift)(void *);
typedef void					(*t_insert)(void *, t_any, t_any);
typedef t_any					(*t_remove)(void *, t_any);
typedef void					(*t_assign)(void *, t_any, t_i32);
typedef t_any					(*t_retrieve)(void *, t_i32);
typedef void					(*t_rotate)(void *);
typedef void					(*t_reverse_rotate)(void *);
typedef void					(*t_swap)(void *, t_any, t_any);
typedef void					(*t_print)(void *);
typedef void					(*t_sort)(void *);
typedef void					(*t_reverse_sort)(void *);
typedef void					(*t_for_each)(void *, void (*)(t_any, t_i32));
typedef void					(*t_for_each_with_data)(
									void *,
									void (*)(t_any, t_i32, void *),
									void *);
typedef t_any					(*t_reduce)(
									void *,
									t_any,
									t_any (*)(t_any, t_any, t_i32));
typedef t_any					(*t_reduce_with_data)(
									void *,
									t_any,
									t_any (*)(t_any, t_any, t_i32, void *),
									void *);
typedef t_i32					(*t_is_empty)(void *);
typedef t_i32					(*t_is_full)(void *);
typedef t_i32					(*t_is_sorted)(void *);
typedef t_i32					(*t_is_reverse_sorted)(void *);
typedef t_i32					(*t_get_length)(void *);
typedef t_i32					(*t_get_size)(void *);
typedef t_any					(*t_to_any)(void *);
typedef t_any					(*t_as_any)(void *);

struct s_type {
	t_i8					*name;
	t_u32					size;
	t_i32					is_value;
	t_i32					is_sequence;
	t_i32					is_instance;
	t_create				create;
	t_destroy				destroy;
	t_copy					copy;
	t_compare				compare;
	t_push					push;
	t_pop					pop;
	t_unshift				unshift;
	t_shift					shift;
	t_insert				insert;
	t_remove				remove;
	t_assign				assign;
	t_retrieve				retrieve;
	t_rotate				rotate;
	t_reverse_rotate		reverse_rotate;
	t_swap					swap;
	t_print					print;
	t_sort					sort;
	t_reverse_sort			reverse_sort;
	t_for_each				for_each;
	t_for_each_with_data	for_each_with_data;
	t_reduce				reduce;
	t_reduce_with_data		reduce_with_data;
	t_is_empty				is_empty;
	t_is_full				is_full;
	t_is_sorted				is_sorted;
	t_is_reverse_sorted		is_reverse_sorted;
	t_get_length			get_length;
	t_get_size				get_size;
	t_to_any				to_any;
	t_as_any				as_any;
};

t_type		any(void);
t_type		f64(void);
t_type		i8(void);
t_type		i32(void);
t_type		i64(void);
t_type		string(void);
t_type		u8(void);
t_type		u32(void);
t_type		u64(void);

t_type		chain(void);
t_type		list(void);
t_type		map(void);
t_type		tuple(void);

t_f64		any_as_f64(t_any instance);
t_f64		any_to_f64(t_any instance);
t_any		f64_to_any(t_f64 value);

t_i8		any_as_i8(t_any instance);
t_i8		any_to_i8(t_any instance);
t_any		i8_to_any(t_i8 value);

t_i32		any_as_i32(t_any instance);
t_i32		any_to_i32(t_any instance);
t_any		i32_to_any(t_i32 value);

t_i64		any_as_i64(t_any instance);
t_i64		any_to_i64(t_any instance);
t_any		i64_to_any(t_i64 value);

t_u8		any_as_u8(t_any instance);
t_u8		any_to_u8(t_any instance);
t_any		u8_to_any(t_u8 value);

t_u32		any_as_u32(t_any instance);
t_u32		any_to_u32(t_any instance);
t_any		u32_to_any(t_u32 value);

t_u64		any_as_u64(t_any instance);
t_u64		any_to_u64(t_any instance);
t_any		u64_to_any(t_u64 value);

void		*create(t_type (*signature)(void));
void		destroy(void *instance);
void		*copy(void *instance);
t_i32		compare(void *instance, void *another_instance);
void		push(void *instance, t_any value);
t_any		pop(void *instance);
void		unshift(void *instance, t_any value);
t_any		shift(void *instance);
void		insert(void *instance, t_any key, t_any value);
t_any		remove(void *instance, t_any key);
void		assign(void *instance, t_any key, t_any value);
t_any		retrieve(void *instance, t_any key);
void		rotate(void *instance);
void		reverse_rotate(void *instance);
void		swap(void *instance, t_any key, t_any another_key);
void		print(void *instance);
void		sort(void *instance);
void		reverse_sort(void *instance);
void		for_each(void *instance, void (*callback)(t_any, t_i32));
void		for_each_with_data(
				void *instance,
				void (*callback)(t_any, t_i32, void *),
				void *data);
t_any		reduce(
				void *instance,
				t_any accumulator,
				t_any (*callback)(t_any, t_any, t_i32));
t_any		reduce_with_data(
				void *instance,
				t_any accumulator,
				t_any (*callback)(t_any, t_any, t_i32, void *),
				void *data);
t_i32		is_empty(void *instance);
t_i32		is_full(void *instance);
t_i32		is_sorted(void *instance);
t_i32		is_reverse_sorted(void *instance);
t_i32		get_length(void *instance);
t_i32		get_size(void *instance);
t_any		to_any(void *instance);
t_any		as_any(void *instance);

#endif