/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_doubles.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:04:54 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:04:57 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

int	check_doubles(t_stack *stack)
{
	t_stack	*temp;

	temp = stack;
	while (stack)
	{
		temp = stack->next;
		while (temp)
		{
			if (temp->data == stack->data)
				return (1);
			temp = temp->next;
		}
		stack = stack->next;
	}
	return (0);
}
