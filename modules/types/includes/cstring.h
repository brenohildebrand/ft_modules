/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cstring.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 16:41:09 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 20:50:10 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CSTRING_H
# define CSTRING_H

# include "types.h"

t_bool	cstring_is_i32(t_cstring cstring);
t_i32	cstring_to_i32(t_cstring cstring);

#endif