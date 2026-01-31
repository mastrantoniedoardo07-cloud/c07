/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdell-or <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:07:31 by mdell-or          #+#    #+#             */
/*   Updated: 2026/01/28 14:48:45 by mdell-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#include <unistd.h>

char	*ft_strdup(char *src)
{
	char	*str;
	char	*p;
	int		len;

	len = 0;
	while (src[len])
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
	p = str;
	while (*src)
		*p++ = *src++;
	*p = '\0';
	return (str);
}
/*
int main(void)
{
	char	*s = "durdal";
	char	*copy;

	copy = ft_strdup(s);
	if (copy)
	{
		write(1, copy, 1);
		write(1, "\n", 1);
	}
	free (copy);
	return (0);
}*/
