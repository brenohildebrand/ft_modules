/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_to_stdout.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:48:18 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 09:40:14 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "utils.h"

void	print_to_stdout(t_cstring cstring)
{
	write(STDOUT, cstring, get_cstring_len(cstring));
}
