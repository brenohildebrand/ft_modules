/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   types.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 14:06:31 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/27 16:59:07 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TYPES_H
# define TYPES_H

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

typedef struct s_type			*t_type;

struct s_type {
	t_cstring	name;
	t_u32		size;
};

typedef struct s_any			*t_any;

union u_any {
	t_i8		i8;
	t_u8		u8;
	t_i32		i32;
	t_u32		u32;
	t_i64		i64;
	t_u64		u64;
	t_pointer	pointer;
};

struct s_any {
	t_type		type;
	union u_any	value;
};

#endif