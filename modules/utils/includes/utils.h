/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/27 22:46:45 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/28 09:46:37 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "types.h"
# include <unistd.h> 

# define STDOUT 1
# define STDERR 2

/**
 * Asserts that the given condition is true. If condition is false,
 * this will print an error message and safely exit the program.
 * 
 * @param condition The condition to assert.
 * @param error_message The error_message.
 */
void assert(t_bool condition, t_cstring error_message);

/**
 * Prints the given cstring to stdout.
 * 
 * @param cstring A literal C string.
 */
void	print_to_stdout(t_cstring cstring);

/**
 * Prints the given cstring to stderr.
 * 
 * @param cstring A literal C string.
 */
void	print_to_stderr(t_cstring cstring);

/**
 * Gets the length of the given C string.
 *
 * @param cstring The C string to get the length of.
 * @return The length of the C string.
 */
t_u32	get_cstring_len(t_cstring cstring);

#endif