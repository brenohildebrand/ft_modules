/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   any.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/28 15:36:34 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 15:39:04 by bhildebr         ###   ########.fr       */
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

#endif