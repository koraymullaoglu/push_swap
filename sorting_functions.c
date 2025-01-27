/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sorting_functions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 17:28:45 by femullao          #+#    #+#             */
/*   Updated: 2025/01/27 18:41:33 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void comparison_sort(int *stack, int size)
{
	int i;
	int j;
	int tmp;
	
	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (stack[i] > stack[j])
			{
				tmp = stack[i];
				stack[i] = stack[j];
				stack[j] = tmp;	
			}
			j++;
		}
		i++;
	}
}

void	sort_three(t_stack *stack)
{
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] && stack->a[0] < stack->a[2])
	{
		rra(stack);
		sa(stack);
	}
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] && stack->a[0] < stack->a[2])
		sa(stack);
	if (stack->a[0] < stack->a[1] && stack->a[1] > stack->a[2] && stack->a[0] > stack->a[2])
		rra(stack);
	if (stack->a[0] > stack->a[1] && stack->a[1] < stack->a[2] && stack->a[0] > stack->a[2])
		ra(stack);
	if (stack->a[0] > stack->a[1] && stack->a[1] > stack->a[2] && stack->a[0] > stack->a[2])
	{
		ra(stack);
		sa(stack);
	}
}



int	sort(t_stack *stack, int size)
{
	if (ft_checksorted(stack->a, stack->size_a, 0) == 0)
	{
		if (size == 2)
			sa(stack->a);
		else if (size == 3)
			sort_three(stack);
		else
			//quicksort_a;
	}
	return (0);
}
