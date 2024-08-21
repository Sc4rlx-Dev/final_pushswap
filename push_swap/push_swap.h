/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:06:20 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:06:23 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

typedef struct s_stack
{
	int				data;
	int				index;
	int				position;
	struct s_stack	*next;
}					t_stack;

size_t				ft_strlen(char *str);
char				**ft_split(char const *s, char c);
void				ft_putstr_fd(char *str, int fd);
size_t				ft_arrlen(char **arr_str);
int					is_numeric(char *str);
long				ft_atol(char *str);
void				push(t_stack **top, int data, int index);
void				pop(t_stack **top);
void				push_from_stack(t_stack **top_s, t_stack **top_r);
int					stack_size(t_stack *stack);
int					find_max(t_stack *stack);
int					find_min(t_stack *stack);
void				pa(t_stack **a, t_stack **b);
void				pb(t_stack **a, t_stack **b);
void				rra(t_stack **a);
void				rrb(t_stack **b);
void				rrr(t_stack **a, t_stack **b);
void				sa(t_stack **a);
void				sb(t_stack **b);
void				ss(t_stack **a, t_stack **b);
void				ra(t_stack **a);
void				rb(t_stack **b);
void				rr(t_stack **a, t_stack **b);
void				free_stack(t_stack **stack);
void				free_array_strings(char **str_array);
void				free_all(char **str_array, t_stack **a);
void				check_args(int ac, char **av, t_stack **a);
void				check_number_valid(char **temp, t_stack **a, int *index);
int					check_doubles(t_stack *stack);
int					is_sorted(t_stack *stack);
void				sort_3(t_stack **a);
void				sort_4(t_stack **a, t_stack **b);
void				sort_5(t_stack **a, t_stack **b);
void				indexing(t_stack *stack);
void				sort_all(t_stack **a, t_stack **b);
void				sort(t_stack **a, t_stack **b);
void				push_to_b(t_stack **a, t_stack **b, int size);
void				set_position(t_stack **stack);
void				reset(int *min, int *max, t_stack **temp, t_stack *top);
void				push_back_to_a(t_stack **a, t_stack **b, int size);

#endif
