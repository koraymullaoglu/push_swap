/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/04 17:51:40 by femullao          #+#    #+#             */
/*   Updated: 2025/01/23 19:19:10 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../push_swap.h"
#include "../libft/libft.h"
#include "../ft_printf/inc/ft_printf.h"

void	sa(t_stack *stack)
{
	int	t;

	if (stack->size_a == 0 || stack->size_a == 1)
		return ;
	t = 0;
	t = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = t;
	ft_printf("sa\n");
}

void	sb(t_stack *stack)
{
	int	t;

	if (stack->size_b == 0 || stack->size_b == 1)
		return ;
	t = 0;
	t = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = t;
	ft_printf("sb\n");
}

void	ss(t_stack *stack)
{
	int	t;

	if ((stack->size_a == 0 || stack->size_a == 1)
		|| (stack->size_b == 0 || stack->size_b == 1))
		return ;
	t = 0;
	t = stack->a[0];
	stack->a[0] = stack->a[1];
	stack->a[1] = t;
	t = stack->b[0];
	stack->b[0] = stack->b[1];
	stack->b[1] = t;
	ft_printf("ss\n");
}
