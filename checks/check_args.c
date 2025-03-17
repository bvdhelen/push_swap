/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/12 02:06:20 by eldiaz-c          #+#    #+#             */
/*   Updated: 2025/03/17 19:39:41 by eldiaz-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

//Función para comprobar si los argumentos pasados son correctos
int	check_args(char **argv)
{
	check_alpha(argv);
	if (!check_number(argv, 1, 0))
		return (false);
	return (true);
}
