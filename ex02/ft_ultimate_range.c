/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 11:13:20 by emastran          #+#    #+#             */
/*   Updated: 2026/02/02 11:16:57 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int ft_ultimate_range(int **range, int min, int max)
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
/*int main()
{
	int	x = 5;
	int	*i = &x;

	printf("%d\n",ft_ultimate_range(&i, 10, 20));
	return(0);
}*/
