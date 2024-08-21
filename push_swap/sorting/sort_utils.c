/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:06:01 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:06:03 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	set_position(t_stack **stack)
{
	t_stack	*temp;
	int		position;

	temp = *stack;
	position = 0;
	while (temp)
	{
		temp->position = position;
		position++;
		temp = temp->next;
	}
}

void	reset(int *min, int *max, t_stack **temp, t_stack *top)
{
	(*min)++;
	(*max)++;
	*temp = top;
}
