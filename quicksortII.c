/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksortII.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:10:35 by femullao          #+#    #+#             */
/*   Updated: 2025/01/23 15:11:33 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

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