/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdell-or <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 07:48:54 by mdell-or          #+#    #+#             */
/*   Updated: 2026/01/29 11:17:44 by mdell-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	j;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	j = max - min;
	*range = (int *) malloc(sizeof(int) * ((long long) max - min));
	if (!*range)
		return (-1);
	tab = *range;
	while (min < max)
		*(tab++) = min++;
	return (j);
}
/*
int	main(void)
{
	int	x = 5;
	int	*i = &x;

	printf("%d\n",ft_ultimate_range(&i, 10, 20));
	return(0);
}*/
