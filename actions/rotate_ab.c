/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_ab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 18:14:50 by femullao          #+#    #+#             */
/*   Updated: 2025/01/04 19:01:48 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"

void	ra(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	tmp = stack->a[0];
	i = 1;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	ft_printf("ra\n");
}


void	rb(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	tmp = stack->b[0];
	i = 1;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1]= tmp;
	ft_printf("rb\n");
}

void	rr(t_stack *stack)
{
	int tmp;
	int i;
	
	if (stack->size_a == 0 || stack->size_a == 1
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	tmp = stack->a[0];
	i = 1;
	while (i < stack->size_a)
	{
		stack->a[i - 1] = stack->a[i];
		i++;
	}
	stack->a[i - 1] = tmp;
	tmp = stack->b[0];
	i = 1;
	while (i < stack->size_b)
	{
		stack->b[i - 1] = stack->b[i];
		i++;
	}
	stack->b[i - 1]= tmp;
	ft_printf("rr\n");	
}