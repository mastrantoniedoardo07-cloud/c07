/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdell-or <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 14:32:26 by mdell-or          #+#    #+#             */
/*   Updated: 2026/01/28 16:18:01 by mdell-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	j;

	j = 0;
	if (min >= max)
		return (0);
	tab = malloc(max - min);
	if (tab == NULL)
		return (NULL);
	while (min < max)
	{
		tab[j] = min;
		min++;
		j++;
	}
	return (tab);
}
/*
int	main(void)
{
	int	maximum = 16 ;
	int	minimum = -3;
	int	i = 0;
	int	temp;

	int *arr = ft_range(minimum, maximum);
	while (i == 0)
	{
		temp = minimum - maximum;
		i < temp;
		i++;
	}
	printf("%d\n", arr[i]);
	return (0);
}*/
