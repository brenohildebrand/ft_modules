/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bhildebr <bhildebr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 09:16:00 by bhildebr          #+#    #+#             */
/*   Updated: 2024/03/18 19:06:59 by bhildebr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

typedef struct s_string	*t_string;

struct s_string {
	t_i8	*content;
	int		start;
	int		end;
	int		length;
	int		max_length;
};

t_type		string(void);
t_string	string_create(void);
t_string	string_init(t_string instance, t_any value);
void		string_destroy(t_string instance);
t_string	string_copy(t_string instance);
t_i32		string_compare(t_string instance);
void		string_push(t_string instance, t_any value);
t_string	string_join(t_string instance, t_string another_instance);
t_list		string_split(t_string instance, t_i8 separator);

create(string)
init(instance, "whatever");

create(string)
init(another_instance, "!");

yet_another_instance = join(instance, another_instance);

destroy(instance);
destroy(another_instance);

#endif