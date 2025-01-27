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

void 	ft_error(int *stack);
int 	ft_atoi_ps(char *str, int * stack);
int		ft_strlen_ps(char **av);
int 	ft_checksorted(int *stack, int size, int order);
int		ft_checkdouble(int *stack, int size);

int	sort(t_stack *stack, int size);




#endif