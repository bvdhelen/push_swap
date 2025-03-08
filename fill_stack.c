/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 20:14:36 by eldiaz-c          #+#    #+#             */
/*   Updated: 2024/12/31 14:01:43 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función para añadir los argumentos, divididos por ' ' al stack A
t_stack	*fill_stack(char **argv)
{
	t_stack	*stack_a;
	char	**temp;

	stack_a = NULL;
	temp = ft_split(argv[1], ' ');
	list_args(temp, &stack_a);
	ft_free_str(temp);
	ft_free_stack(temp);
	return (stack_a);
}
