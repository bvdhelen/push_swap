/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 01:51:49 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/19 17:42:48 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

t_stack	*process(int argc, char **argv)
{
	t_stack	*a;
	int		i;
	int		j;

	i = 1;
	a = NULL;
	if (argc == 2)
		a = sub_process(argv);
	else
	{
		while (i < argc)
		{
			j = ft_atoi2(argv[i], &a);
			ft_add_back(&a, ft_new_node(j, &a));
			i++;
		}
	}
	return (a);
}
