/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/22 15:52:12 by femullao          #+#    #+#             */
/*   Updated: 2025/01/23 15:54:21 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>


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
    t_stack *stack = malloc(sizeof(t_stack));
    int a[] = {5, 1, 8, 3, 7};
    int b[10];

    stack->a = a;
    stack->b = b;
    stack->size_a = 5;
    stack->size_b = 0;
    quick_sort(stack);

    free(stack);
    return 0;
}