/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:01:20 by femullao          #+#    #+#             */
/*   Updated: 2025/02/06 13:35:56 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "libft/libft.h"
#include <stdlib.h>

void	push_swap(t_data *data)
{
	t_stack		stack;
	int			size;
	int			i;

	i = -1;
	size = ft_strlen_ps(data->argv);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return ;
	stack.size_a = size;
	stack.b = malloc(sizeof(int) * size);
	if (!stack.b)
	{
		free(stack.a);
		return ;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_atoi_ps(data->argv[i], &stack, 1, data);
	ft_checkdouble(&stack, size, data);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);
}

int	main(int ac, char **av)
{
	t_data	data;

	data.ac = ac;
	if (data.ac > 1)
	{
		av++;
		data.argv = av;
		if (data.ac == 2)
			data.argv = ft_split(*data.argv, ' ');
		push_swap(&data);
		if (data.ac == 2)
		{
			free(*data.argv);
			free(data.argv);
		}
		return (0);
	}
	return (0);
}
