/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:06:07 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:06:09 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	sort(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_size(*a);
	if (size == 1)
	{
		free_stack(a);
		exit(EXIT_SUCCESS);
	}
	if (size == 2)
		sa(a);
	if (size == 3)
		sort_3(a);
	if (size == 4)
		sort_4(a, b);
	if (size == 5)
		sort_5(a, b);
	if (size > 5)
		sort_all(a, b);
	free_stack(a);
}
