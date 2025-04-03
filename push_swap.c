/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 00:02:05 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/04/03 17:43:16 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/push_swap.h"

int	main(int argc, char **argv)
{
	t_stack	*a;

	if (argc == 1)
		return (1);
	if (check_args(argv) == 0)
		ft_error(NULL);
	a = process(argc, argv);
	if (!a || check_duplicates(a))
		ft_error(&a);
	if (!check_order(a))
		ft_sort(&a);
	ft_free(&a);
	return (0);
}
