/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 20:50:25 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/30 05:39:47 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I32_H
# define I32_H

#include "types.h"

t_type	i32(void);
t_i32	i32_compare(t_any instance, t_any another_instance);
t_any	i32_to_any(t_i32 value);
t_i32	i32_abs(t_i32 value);

#endif