/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:05:36 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:11:23 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sorting(int position, t_stack **a, t_stack **b)
{
	if (position == 0)
		pb(a, b);
	if (position == 1)
	{
		sa(a);
		pb(a, b);
	}
	if (position == 2)
	{
		ra(a);
		ra(a);
		pb(a, b);
	}
	if (position == 3)
	{
		rra(a);
		rra(a);
		pb(a, b);
	}
	if (position == 4)
	{
		rra(a);
		pb(a, b);
	}
}

void	sort_5(t_stack **a, t_stack **b)
{
	t_stack	*temp;
	int		min;
	int		position;

	temp = *a;
	position = 0;
	min = find_min(temp);
	while (temp)
	{
		if (temp->data == min)
			break ;
		position++;
		temp = temp->next;
	}
	sorting(position, a, b);
	sort_4(a, b);
	sort_3(a);
	pa(a, b);
	temp = NULL;
}
