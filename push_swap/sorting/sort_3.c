/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:05:26 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 14:57:39 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static void	sorting(t_stack **a, int *arr)
{
	if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] < arr[2])
	{
		rra(a);
		sa(a);
	}
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] > arr[2])
		ra(a);
	if (arr[0] > arr[1] && arr[1] < arr[2] && arr[0] < arr[2])
		sa(a);
	if (arr[0] > arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
	{
		ra(a);
		sa(a);
	}
	if (arr[0] < arr[1] && arr[1] > arr[2] && arr[0] > arr[2])
		rra(a);
}

void	sort_3(t_stack **a)
{
	int		i;
	int		temp[3];
	t_stack	*current;

	current = *a;
	i = 0;
	while (current && i < 3)
	{
		temp[i] = current->data;
		i++;
		current = current->next;
	}
	current = NULL;
	sorting(a, temp);
}
