/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:04:10 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:04:13 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	push_from_stack(t_stack **top_s, t_stack **top_r)
{
	if (*top_s)
	{
		push(top_r, (*top_s)->data, (*top_s)->index);
		pop(top_s);
	}
}

void	pa(t_stack **a, t_stack **b)
{
	push_from_stack(b, a);
	ft_putstr_fd("pa\n", 1);
}

void	pb(t_stack **a, t_stack **b)
{
	push_from_stack(a, b);
	ft_putstr_fd("pb\n", 1);
}
