/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oer-raou <oer-raou@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:04:46 by oer-raou          #+#    #+#             */
/*   Updated: 2024/08/21 13:04:49 by oer-raou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

static int	is_space(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && str[i] != '\t')
			return (0);
		i++;
	}
	return (1);
}

static void	check_emptystring(int index, char **av, t_stack **stack)
{
	if (!av[index][0] || is_space(av[index]))
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(stack);
		exit(1);
	}
}

static void	check_input(int ac, char **av, t_stack **a)
{
	int		i;
	int		j;
	char	**temp;

	if (ac < 2)
		exit(0);
	i = ac;
	i--;
	while (i > 0)
	{
		check_emptystring(i, av, a);
		temp = ft_split(av[i], ' ');
		j = ft_arrlen(temp);
		j--;
		while (j >= 0)
		{
			check_number_valid(temp, a, &j);
			j--;
		}
		free_array_strings(temp);
		i--;
	}
}

void	check_args(int ac, char **av, t_stack **a)
{
	check_input(ac, av, a);
	if (check_doubles(*a))
	{
		ft_putstr_fd("Error\n", 2);
		free_stack(a);
		exit(EXIT_FAILURE);
	}
}
