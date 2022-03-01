/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 21:48:04 by acanterg          #+#    #+#             */
/*   Updated: 2021/09/06 13:11:30 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSHSWAP_H
#define FT_PUSHSWAP_H

#include "lib.h"
#include "const.h"
#include "struct.h"
#include "functions.h"

void exec(t_obj *obj, int action, int id);
t_stack *get_stack(t_obj *obj, int id);
void get_correct_min(t_obj *obj);
void sort_big(t_obj *obj);
int is_sorted(t_stack *stack, int index);
int find_best_of_group(t_obj *obj);
int find_best_on_b(t_obj *obj);
int find_index(t_stack *stack, int value);
int *get_array(t_obj *obj, int id);
void bring_to_top_by_index(int index, t_obj *obj, int id);
int get_action_by_index(int index, int length);
int get_min(t_stack *stack, int opt);
int get_max(t_stack *stack, int opt);
void quit_invalid(t_obj *obj);
void s(t_stack *stack);
void p(t_stack *stack_from, t_stack *stack_to);
void r(t_stack *stack);
void rr(t_stack *stack);
void print_arrays(t_obj *obj);
void quit_error(void);
void sort(t_obj *obj);
void init(t_obj *obj, int argc, char **argv);

#endif
