/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:01:20 by femullao          #+#    #+#             */
/*   Updated: 2025/01/27 18:44:25 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void push_swap(char **av)
{
	t_stack		stack;
	int			size;
	int			i;

	i = -1;
	size = ft_strlen_ps(av);
	stack.a = malloc(sizeof(int) * size);
	if (!stack.a)
		return;
	stack.size_a = size;
	stack.b = malloc(sizeof(int)* size);
	if (!stack.b)
	{
		free(stack.a);
		return;
	}
	stack.size_b = 0;
	while (++i < size)
		stack.a[i] = ft_atoi_ps(av[i], stack.a);
	ft_checkdouble(stack.a, size);
	sort(&stack, size);
	free(stack.a);
	free(stack.b);	
}


int main(int ac, char **av)
{
	if (ac > 1)
	{
		av++;
		if (ac == 2)
			av = ft_split(*av, ' ');
		push_swap(av);
		return (0);
	}
	return (0);
}