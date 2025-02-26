/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:51:19 by femullao          #+#    #+#             */
/*   Updated: 2025/02/06 13:57:17 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include "push_swap.h"
#include <stdlib.h>

void	ft_error(t_stack *stack, t_data *data)
{
	if (data->ac == 2)
	{
		free(data->argv[0]);
		free(data->argv);
	}
	free(stack->a);
	free(stack->b);
	ft_putendl_fd("Error", 2);
	exit (1);
}
