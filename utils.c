/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 15:22:02 by femullao          #+#    #+#             */
/*   Updated: 2025/02/03 16:15:03 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include "./ft_printf/inc/ft_printf.h"
#include "libft/libft.h"
#include <stdlib.h>

void	ft_error(int *stack)
{
	free(stack);
	ft_printf("Error\n");
	exit (1);
}

int	ft_atoi_ps(char *str, int *stack, int sgn)
{
	unsigned int		i;
	unsigned long int	r;

	i = 0;
	r = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	if (str[i] == '\0')
		ft_error(stack);
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
			ft_error(stack);
		r = (str[i++] - '0') + (r * 10);
	}
	if ((r > 2147483648 && sgn == -1) || (r > 2147483647 && sgn == 1))
		ft_error(stack);
	return (r * sgn);
}

int	ft_strlen_ps(char **av)
{
	int	i;

	i = 0;
	while (*av)
	{
		av++;
		i++;
	}
	return (i);
}

int	ft_checksorted(int *stack, int size, int order)
{
	int	i;

	if (order == 0)
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] > stack[i])
				return (0);
			i++;
		}
		return (1);
	}
	else
	{
		i = 1;
		while (i < size)
		{
			if (stack[i - 1] < stack[i])
				return (0);
			i++;
		}
		return (1);
	}
}

void	ft_checkdouble(int *stack, int size)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < size)
	{
		while (j < size)
		{
			if (stack[i] == stack[j])
				ft_error(stack);
			j++;
		}
		i++;
		j = i + 1;
	}
}
