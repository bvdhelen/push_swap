/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_alpha.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:31:50 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/19 17:40:51 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42)
		|| (c == 44) || (c == 46) || (c == 47))
		return (1);
	return (0);
}

void	check_alpha(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_error(NULL);
			j++;
		}
		i++;
	}
}
