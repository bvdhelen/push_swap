/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sub_process.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:28:41 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/20 18:39:06 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

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
	i = 0;
	while (temp[i])
	{
		j = ft_atoi2(temp[i], &a, temp);
		ft_add_back(&a, ft_new_node(j, &a));
		i++;
	}
	ft_freestr(temp);
	free(temp);
	return (a);
}
