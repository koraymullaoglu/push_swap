/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:52:12 by femullao          #+#    #+#             */
/*   Updated: 2025/01/22 18:06:58 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int find_pivot(int *stack, int size)
{
	int sum;
	int i;

	sum = 0;
	while (i < size)
	{
		sum += stack[i];
		i++;
	}
	return (sum / size);
}

void	quickpart_a(t_stack *stack, int size)
{
	int pivot;
	int pushed;
	int i;

	pushed = 0;
	pivot = find_pivot(stack->a, size);
	if (size <= 1)
		return ;
	
	while (i < size)
	{
		if (stack->a[0] < pivot)
		{
			pb(stack);
			pushed++;
		}
		else
			ra(stack);
		i++;
	}
	i = 0;
	while (i++ < (size - pushed))
		rra(stack);
	quickpart_a(stack, size - pushed);
	quickpart_b(stack, pushed);
}

void quickpart_b(t_stack *stack, int size)
{
	int pivot;
	int pushed;
	int i;
	
	pushed = 0;
	pivot = find_pivot(stack->b, size);
	if (size <= 1)
		return;

	while (i < size)
	{
		if (stack->b[0] > pivot)
		{
			pa(stack);
			pushed++;
		}
		else
			rb(stack);
		i++;
	}
	i = 0;
	while(i++ < (size - pushed))
		rrb(stack);
	quickpart_a(stack, pushed);
	quickpart_b(stack, size - pushed);
}
void quick_sort(t_stack *stack) {
    quickpart_a(stack, stack->size_a);
}

int main()
{
	t_stack *stack;
	int *arr =  {4,3,7,5,10};
	stack->a = arr;
	stack->size_a = 5;
	stack->b = NULL;
	stack->size_b = 0;
	quick_sort(stack);
	
}