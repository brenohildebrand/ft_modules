/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_stderr.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 23:18:24 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 09:39:46 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	print_to_stderr(t_cstring cstring)
{
	write(STDERR, cstring, get_cstring_len(cstring));
}
