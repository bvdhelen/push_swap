/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 17:40:54 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 22:04:48 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función para comprobar el número de argumentos y rellenar el stack o listarlos
t_stack	*parse_args(int argc, char **argv)
{
	t_stack	*stack_a;

	stack_a = NULL;
	if (argc < 2)
		ft_error();
	else if (argc == 2)
		stack_a = fill_stack(argv);
	else
	{
		list_args(argv, &stack_a);
	}
	return (stack_a);
}
