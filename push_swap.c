/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:02:05 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/18 21:40:21 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1)
		return (1);
	a = process(argc, argv);
	if (!a || check_duplicates(a))
	{
		ft_free(&a);
		ft_error();
	}
	if (!check_order(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
