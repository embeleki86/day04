/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: embeleki <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/14 09:11:39 by embeleki          #+#    #+#             */
/*   Updated: 2020/01/14 09:24:34 by embeleki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_recursive_factorial.c"
#include <stdio.h>

int	ft_recursive_factorial(int nb);

int main()
{
	int n = ft_recursive_factorial(6);
	printf("%d\n", n);
}
