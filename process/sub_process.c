/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:28:41 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 22:02:12 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función para procesar un argummento que contiene una cadena entre comillas,
//separar los números y añadirlos al stack A
t_stack	*sub_process(char **argv)
{
	t_stack	*a;
	char	**temp;
	int		i;
	int		j;

	a = NULL;
	i = 0;
	temp = ft_split(argv[1], ' ');
	if (!temp)
		return (NULL);
	while (temp[i])
		i++;
	if (i == 1)
		return (NULL);
	i = 0;
	while (temp[i])
	{
		j = ft_atoi2(temp[i]);
		ft_add_back(&a, ft_new_node(j));
		i++;
	}
	ft_freestr(temp);
	free(temp);
	return (a);
}
