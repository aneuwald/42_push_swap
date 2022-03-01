/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:48:04 by acanterg          #+#    #+#             */
/*   Updated: 2021/09/06 12:45:42 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct s_stack
{
	int length;
	int *array;
} t_stack;

typedef struct s_group
{
	int min;
	int max;
	int size;
	int last_smaller;
} t_group;

typedef struct s_obj
{
	int max_size;
	t_stack a;
	t_stack b;
	int print_exec;
	int print_arrays;
	t_group group;
} t_obj;

#endif
