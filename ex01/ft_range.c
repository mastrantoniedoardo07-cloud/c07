/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emastran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 09:52:59 by emastran          #+#    #+#             */
/*   Updated: 2026/02/02 11:07:04 by emastran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

int *ft_range(int min, int max)
{
	int	*s;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	s = (int *)malloc((max - 1) * sizeof(int));
	while (min < max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);	
}
/*int main()
{
	int *arr = ft_range(1, 10);
	int size = 10 -1;
	int i = 0;

	while(i < size)
	{
		printf("%d ", arr[i]);
		i++;
	}
}*/
