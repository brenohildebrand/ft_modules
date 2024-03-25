/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:21:37 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:29:23 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I8_H
# define I8_H

typedef char	t_i8;

t_type	i8(void);
t_i32	i8_is_digit(t_i8 value);
t_i32	i8_is_space(t_i8 value);
t_i32	i8_is_signal(t_i8 value);
t_any	i8_to_any(t_i8 value);

t_type	i8_sequence(void);
t_i32	i8_sequence_is_i32(t_i8 *sequence);
t_i32	i8_sequence_to_i32(t_i8 *sequence);
t_any	i8_sequence_to_any(t_i8 *sequence);

#endif