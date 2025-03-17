/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:37:38 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 21:59:13 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	ft_freestr(char **lst)
{
	char	*n1;

	if (!lst)
		return ;
	while (*lst)
	{
		n1 = *lst;
		lst++;
		free(n1);
	}
	*lst = NULL;
}

//Función para rellenar el stack A
t_stack	*fill_stack(char **argv)
{
	t_stack	*stack_a;
	char	**temp;

	stack_a = NULL;
	temp = ft_split(argv[1], 32);
	list_args(temp, &stack_a);
	ft_freestr(temp);
	free(temp);
	return (stack_a);
}
