/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:14:50 by femullao          #+#    #+#             */
/*   Updated: 2025/01/23 18:44:08 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_a == 0 || stack->size_a == 1)
		return ;

	if (stack->size_a > 0)
	{
		tmp = stack->a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[stack->size_a - 1] = tmp;
	}
	ft_printf("ra\n");
}


void	rb(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_b == 0 || stack->size_b == 1)
		return ;

	if (stack->size_b > 0)
	{
		tmp = stack->b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[stack->size_b - 1] = tmp;
	}
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	if (stack->size_a > 0)
	{
		tmp = stack->a[0];
		i = 0;
		while (i < stack->size_a - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[stack->size_a - 1] = tmp;
	}
	if (stack->size_b > 0)
	{
		tmp = stack->b[0];
		i = 0;
		while (i < stack->size_b - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[stack->size_b - 1] = tmp;
	}
	ft_printf("rr\n");	
}
