/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   indexing.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:05:20 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 15:02:20 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	*stack_to_arr(t_stack *stack)
{
	int	size;
	int	*arr;
	int	i;

	size = stack_size(stack);
	arr = (int *)malloc(sizeof(int) * size);
	if (!arr)
		return (NULL);
	i = 0;
	while (stack)
	{
		arr[i] = stack->data;
		stack = stack->next;
		i++;
	}
	return (arr);
}

static int	*sort_arr(int *arr, int size)
{
	int	i;
	int	j;
	int	tmp;

	if (!arr)
		return (NULL);
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (arr[j] > arr[j + 1])
			{
				tmp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
	return (arr);
}

static void	sorting_error(int *arr)
{
	if (!arr)
		exit(1);
}

void	indexing(t_stack *stack)
{
	int		size;
	int		*arr;
	t_stack	*current;
	int		j;

	size = stack_size(stack);
	arr = stack_to_arr(stack);
	arr = sort_arr(arr, size);
	sorting_error(arr);
	current = stack;
	while (current)
	{
		j = 0;
		while (j < size)
		{
			if (arr[j] == current->data)
			{
				current->index = j;
				break ;
			}
			j++;
		}
		current = current->next;
	}
	free(arr);
}
