/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   quicksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/31 17:02:55 by femullao          #+#    #+#             */
/*   Updated: 2025/01/31 18:51:48 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


void	ft_little_sorter_a(t_stack *stack, int length)
{
	if (length == 3 && stack->size_a == 3)
		sort_three(stack);
	else if (length == 2)
	{
		if (stack->a[0] > stack->a[1])
			sa(stack);
	}
	else if (length == 3)
	{
		while (length != 3 || !(stack->a[0] < stack->a[1]
			 && stack->a[1] < stack->a[2]))
		{
			if (length == 3 && stack->a[0] > stack->a[1] && stack->a[2])
				sa(stack);
			else if (length == 3 && !(stack->a[2] > stack->a[0]
					&& stack->a[2] > stack->a[1]))
				length = ft_push(stack, length, 'b');
			else if (stack->a[0] > stack->a[1])
				sa(stack);
			else if (length++)
				pa(stack);
		}
	}
}


int	ft_little_sorter_b(t_stack *stack, int length)
{
	if (length == 1)
		pa(stack);
	else if (length == 2)
	{
		if (stack->b[0] < stack->b[1])
			sb(stack);
		while (length--)
			pa(stack);
	}
	else if (length == 3)
	{
		while (length || !(stack->a[0] < stack->a[1] && stack->a[1] < stack->a[2]))
		{
			if (length == 1 && stack->a[0] > stack->a[1])
				sa(stack);
			else if (length == 1 || (length >= 2 && stack->b[0] > stack->b[1])
				|| (length == 3 && stack->b[0] > stack->b[2]))
				length = ft_push(stack, length, 'a');
			else
				sb(stack);
		}
	}
	return (0);
}


int ft_getpivot(int *piv, int *stack, int size)
{
	int *tmp;
	int i;

	tmp = (int *)malloc(sizeof(int) * size);
	if (!tmp)
		return (0);
	i = 0;
	while (i < size)
	{
		tmp[i] = stack[i];
		i++;
	}
	comparison_sort(tmp, size);
	*piv = tmp[size / 2];
	free (tmp);
	return (1);
}


int quicksort_a(t_stack *stack, int length, int ct_r)
{
	int piv;
	int size;

	if (ft_checksorted(stack->a, length, 0) == 1)
		return (1);
	size = length;
	if (length <= 3)
	{
		ft_little_sorter_a(stack, length);
		return (1);
	}
	if (!ct_r &&  !ft_getpivot(&piv, stack->a, length))
			return (0);
	while (length != size / 2 + size % 2)
	{
		if (stack->a[0] < piv && (length--))
			pb(stack);
		else if (++ct_r)
			ra(stack);
	}
	while (size / 2 + size % 2 != stack->size_a && ct_r--)
		rra(stack);
	return (quicksort_a(stack, size / 2 + size % 2, 0) && quicksort_b(stack, size / 2, 0));
	return (1);
}

int quicksort_b(t_stack *stack, int length, int ct_r)
{
	int piv;
	int size;

	if (!ct_r && ft_checksorted(stack->a, length, 0) == 1)
		while (length--)
			pa(stack);
	if (length <= 3)
	{
		ft_little_sorter_b(stack, length);
		return (1);
	}
	size = length;
	if (!ft_getpivot(&piv, stack->b, length))
		return (0);
	while (length != (size / 2))
	{
		if (stack->b[0] >= piv && (length--))
			pa(stack);
		else if (++ct_r)
			rb(stack);
	}
	while (size / 2 != stack->size_b && ct_r--)
		rrb(stack);
	return (quicksort_a(stack, size / 2 + size % 2, 0) 
		&& quicksort_b(stack, size / 2, 0));
}

	
