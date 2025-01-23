#ifndef PUSH_SWAP_H
#define PUSH_SWAP_H

#include "libft/libft.h"
#include "./ft_printf/inc/ft_printf.h"
#include <stdlib.h>

typedef struct s_stack
{
	int *a;
	int *b;
	int size_a;
	int size_b;
}	t_stack;

void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	ra(t_stack *stack);
void	rb(t_stack *stack);
void	rr(t_stack *stack);
void	rra(t_stack *stack);
void	rrb(t_stack *stack);
void	rrr(t_stack *stack);

void	quickpart_a(t_stack *stack, int size);
void	quickpart_b(t_stack *stack, int size);
int find_pivot(int *stack, int size);




#endif