/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/15 03:00:55 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/31 20:27:19 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stdlib.h>

/**
 * Allocates size bytes of memory using malloc() and aborts if allocation fails.
 * This provides a safe wrapper around malloc() to avoid needing error checking 
 * after every allocation
 * 
 * @param size The size in bytes to be allocated.
 * @returns The address of the first byte.
 */
void	*safe_malloc(unsigned int size);

/**
 * Frees memory allocated with safe_malloc().
 *
 * @param address Pointer to memory previously allocated with safe_malloc.
 */
void	safe_free(void *address);

/**
 * Frees the memory allocated with safe_malloc and exits the program with 
 * the given code.
 * 
 * @param code The exit code.
 */
void	safe_exit(int code);

#endif