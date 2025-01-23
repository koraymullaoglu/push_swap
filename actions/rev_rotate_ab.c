/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_ab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:25:47 by femullao          #+#    #+#             */
/*   Updated: 2025/01/23 18:36:24 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	rra(t_stack *stack)
{
	int tmp;
	int i;

	if (stack->size_a == 0 || stack->size_a == 1)
		return;
	if (stack->size_a > 0)
	{
		tmp = stack->a[stack->size_a - 1];
		i = stack->size_a - 1;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
	}
	ft_printf("rra\n");
}

void	rrb(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_b == 0 || stack->size_b == 1)
		return;

	if (stack->size_b > 0)
	{
		tmp = stack->b[stack->size_b - 1];
		i = stack->size_b - 1;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = tmp;
	}
	ft_printf("rrb\n");
}

void rrr(t_stack *stack)
{
	int tmp;
	int i;
	
	
	if (stack->size_a == 0 || stack->size_a == 1 || stack->size_b == 0 || stack->size_b == 1)
		return;

	if (stack->size_a > 0)
	{
		tmp = stack->a[stack->size_a - 1];
		i = stack->size_a - 1;
		while (i > 0)
		{
			stack->a[i] = stack->a[i - 1];
			i--;
		}
		stack->a[0] = tmp;
	}
	if (stack->size_b > 0)
	{
		tmp = stack->b[stack->size_b - 1];
		i = stack->size_b - 1;
		while (i > 0)
		{
			stack->b[i] = stack->b[i - 1];
			i--;
		}
		stack->b[0] = tmp;
	}
	ft_printf("rrr\n");
}