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

//Función para procesar un argumento que contiene una cadena entre comillas,
//separar los números y añadirlos al stack A
t_stack	*ft_sub_process(char **argv)
{
	t_stack	*a;
	char	**temp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	temp = ft_split(argv[1], ' ');
	while (temp[i])
	{
		j = ft_atoi2(temp[i]);
		add_back(&a, new_node(j));
		i++;
	}
	free_str(temp);
	free_stack(temp);
	return (a);
}
