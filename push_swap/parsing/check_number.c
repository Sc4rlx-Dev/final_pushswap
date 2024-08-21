/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:05:02 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:05:04 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

int	is_numeric(char *str)
{
	int	i;

	i = 0;
	if (!str[0] || !str)
		return (0);
	if ((str[i] == '+' || str[i] == '-') && !str[i + 1])
		return (0);
	else if ((str[i] == '+' || str[i] == '-'))
		i++;
	while (str[i])
	{
		if (!is_digit(str[i]))
			return (0);
		i++;
	}
	return (1);
}

void	check_number_valid(char **temp, t_stack **a, int *index)
{
	long	number;
	int		i;

	i = *index;
	if (is_numeric(temp[i]))
	{
		number = ft_atol(temp[i]);
		if (number <= 2147483647 && number >= -2147483648)
			push(a, number, 0);
		else
		{
			free_all(temp, a);
			ft_putstr_fd("Error\n", 2);
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		free_all(temp, a);
		ft_putstr_fd("Error\n", 2);
		exit(EXIT_FAILURE);
	}
}
