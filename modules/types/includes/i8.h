/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   i8.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:43:46 by bhildebr          #+#    #+#             */
/*   Updated: 2024/04/04 15:48:44 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef I8_H
# define I8_H

# include "types.h"

t_type	i8(void);
t_bool	i8_is_space(t_i8 value);
t_bool	i8_is_signal(t_i8 value);
t_bool	i8_is_digit(t_i8 value);
t_any	i8_to_any(t_i8 value);

#endif