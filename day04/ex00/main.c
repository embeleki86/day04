/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embeleki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:11:45 by embeleki          #+#    #+#             */
/*   Updated: 2020/01/14 09:18:04 by embeleki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_iterative_factorial.c"
#include <stdio.h>

int	ft_iterative_factorial(int nb);

int	main()
{
	int n = ft_iterative_factorial(6);
	printf("%d\n", n);
}
