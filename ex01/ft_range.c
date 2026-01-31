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

int	*ft_range( int min, int max)
{
	int	*ret;
	int	*temp;

	if (min >= max)
		return (0);
	ret = (int *)malloc(sizeof(int) * ((long long)max - min));
	if (!ret)
		return (0);
	temp = ret;
	while (min < max)
		*(temp++) = min++;
	return (ret);
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
