/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i64.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/28 12:27:29 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/17 00:29:13 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I64_H
# define I64_H

typedef long long int	t_i64;

t_type	i64(void);
t_i32	i64_is_i32(t_i64 value);
t_any	i64_to_any(t_i64 value);

#endif