/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embeleki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:40:52 by embeleki          #+#    #+#             */
/*   Updated: 2020/01/14 09:46:04 by embeleki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_power.c"
#include <stdio.h>

int		ft_recursive_power(int nb, int power);

int main()
{
	int n = ft_recursive_power(2, -2);
	printf("%i\n", n);
}
