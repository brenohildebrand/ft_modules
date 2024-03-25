/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i32.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:24:43 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:29:20 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I32_H
# define I32_H

typedef int	t_i32;

t_type	i32(void);
t_i32	i32_compare(t_any instance, t_any another_instance);
t_any	i32_to_any(t_i32 value);

#endif