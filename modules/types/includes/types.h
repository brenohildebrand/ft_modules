/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:06:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/29 18:31:25 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

# include <stdlib.h>

# define TRUE (1)
# define FALSE (0)

typedef int						t_bool;
typedef char					*t_cstring;

typedef unsigned char			t_u8;
typedef char					t_i8;

typedef unsigned int			t_u32;
typedef int						t_i32;

typedef unsigned long long int	t_u64;
typedef long long int			t_i64;

typedef double					t_f64;

typedef void					*t_pointer;
typedef void					*t_instance;

typedef struct s_type			*t_type;

struct s_type {
	t_cstring	name;
	t_u32		size;
	t_bool		is_value;
	t_bool		is_instance;
	t_pointer	(*create)(void);
	void		(*destroy)(t_instance);
	t_i32		(*compare)(t_instance, t_instance);
};

typedef struct s_any			*t_any;

union u_any {
	t_i8		i8;
	t_u8		u8;
	t_i32		i32;
	t_u32		u32;
	t_i64		i64;
	t_u64		u64;
	t_instance	instance;
};

struct s_any {
	t_type		type;
	union u_any	value;
};

/**
 * Allocates memory.
 *
 * Allocates size bytes of memory. Returns a pointer to the allocated memory,
 * If the allocation fails the program will safely exit.
 * 
 * @param size The size in bytes.
 * @returns A pointer to the allocated memory.
 */
t_pointer	allocate(t_i32 size);

/**
 * Frees memory previously allocated with allocate().
 *
 * @param pointer Pointer to memory previously allocated with allocate().
 */
void	deallocate(t_pointer pointer);

/**
 * Allocates memory for a new instance of the given type.
 * 
 * @param signature The signature function of the type. It is the function
 * with the same name as the type.
 */
t_instance	new(t_type (*signature)(void));

/**
 * Deletes the given instance, freeing its allocated memory.
 * The instance must have been allocated using new().
 * 
 * @param instance The instance to delete.
 */
void	delete(t_instance instance);

/**
 * Exits the program with the given exit code.
 * 
 * @param code The exit code.
 */
void	quit(t_i32 code);

/**
 * Creates a new instance of the given type.
 * 
 * @return A pointer to the new instance.
 */
t_pointer	create(t_type (*signature)(void));

/**
 * Destroys the given instance, freeing any resources it uses.
 * 
 * @param instance A pointer to the instance to be destroyed.
 */
void	destroy(t_pointer instance);

#endif