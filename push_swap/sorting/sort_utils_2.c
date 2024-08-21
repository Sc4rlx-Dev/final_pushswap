/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils_2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:05:50 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:05:56 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	push_and_rotate_b(t_stack **a, t_stack **b, t_stack *temp, int size)
{
	if (temp->position < size / 2)
	{
		while (*a != temp)
			ra(a);
		pb(a, b);
		rb(b);
	}
	else
	{
		while (*a != temp)
			rra(a);
		pb(a, b);
		rb(b);
	}
	set_position(a);
}

static void	push_b_pb(t_stack **a, t_stack **b, t_stack *temp, int size)
{
	if (temp->position <= size / 2)
	{
		while (*a != temp)
			ra(a);
		pb(a, b);
	}
	else
	{
		while (*a != temp)
			rra(a);
		pb(a, b);
	}
	set_position(a);
}

void	push_to_b(t_stack **a, t_stack **b, int size)
{
	int		min;
	int		max;
	t_stack	*temp;

	min = 1;
	max = size / 14;
	temp = *a;
	set_position(a);
	while (temp)
	{
		if (temp->index < min)
		{
			push_and_rotate_b(a, b, temp, size);
			reset(&min, &max, &temp, *a);
			continue ;
		}
		else if (temp->index >= min && temp->index <= max)
		{
			push_b_pb(a, b, temp, size);
			reset(&min, &max, &temp, *a);
			continue ;
		}
		temp = temp->next;
	}
}

static void	push_back_a_helper(t_stack **a, t_stack **b, t_stack *temp,
		int size)
{
	if (temp->position < size / 2)
	{
		while (temp != *b)
			rb(b);
		pa(a, b);
	}
	else
	{
		while (temp != *b)
			rrb(b);
		pa(a, b);
	}
}

void	push_back_to_a(t_stack **a, t_stack **b, int size)
{
	t_stack	*temp;

	temp = *b;
	while (*b)
	{
		while (temp)
		{
			if (temp->data == find_max(*b))
			{
				set_position(b);
				push_back_a_helper(a, b, temp, size);
				size = stack_size(*b);
				break ;
			}
			temp = temp->next;
		}
		temp = *b;
	}
}
