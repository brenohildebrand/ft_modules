/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:36:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 02:04:36 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANY_H
# define ANY_H

# include "types.h"

/**
 * Any is a type that can represent any type. It's declared in types.h.
*/

t_type	any(void);
t_any	any_create(void);
void	any_destroy(t_any instance);
t_any	any_copy(t_any instance);
t_i32	any_compare(t_any instance, t_any another_instance);
t_i32	any_as_i32(t_any instance);
t_i32	any_to_i32(t_any instance);

#endif