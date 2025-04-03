/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/13 18:14:46 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/04/03 18:51:24 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

static char	**free_memory(char **result)
{
	int	x;

	x = 0;
	if (!result)
		return (NULL);
	while (result[x] != NULL)
	{
		free (result[x]);
		x++;
	}
	free (result);
	return (NULL);
}

static int	ft_issign(const char **str)
{
	if (**str == '-')
	{
		(*str)++;
		return (-1);
	}
	else if (**str == '+')
		(*str)++;
	return (1);
}

int	ft_atoi2(const char *str, t_stack **a, char **temp)
{
	int				mod;
	long long int	i;

	i = 0;
	mod = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\f'
		|| *str == '\v' || *str == '\r')
		str++;
	mod = ft_issign(&str);
	while (*str)
	{
		if (!ft_isdigit(*str))
		{
			free_memory(temp);
			ft_error(a);
		}
		i = i * 10 + (*str - '0');
		str++;
	}
	if ((mod * i) > 2147483647 || (mod * i) < -2147483648)
	{
		free_memory(temp);
		ft_error(a);
	}
	return (mod * i);
}
