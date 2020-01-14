/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embeleki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:11:36 by embeleki          #+#    #+#             */
/*   Updated: 2020/01/14 09:33:15 by embeleki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterative_power.c"
#include <stdio.h>

int		ft_iterative_power(int nb, int power);

int main()
{
	int n = ft_iterative_power(-3, 2);
	printf("%i\n", n);
}
