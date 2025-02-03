/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: femullao <femullao@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/03 16:51:19 by femullao          #+#    #+#             */
/*   Updated: 2025/02/03 16:56:37 by femullao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./ft_printf/inc/ft_printf.h"
#include <stdlib.h>

void	ft_error(int *stack)
{
	free(stack);
	ft_printf("Error\n");
	exit (1);
}
