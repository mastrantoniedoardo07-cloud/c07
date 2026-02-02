/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdell-or <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 11:18:47 by mdell-or          #+#    #+#             */
/*   Updated: 2026/01/29 14:38:42 by mdell-or         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest,	char *src)
{
	while (*src)
		*(dest++) = *(src++);
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char		*x;
	char		*temp;
	long long	strs_len;
	int			i;

	if (!size)
	{
		x = ((char *)malloc(1));
		x[0] = 0;
		return (x);
	}
	strs_len = 0;
	i = 0;
	while (i < size)
		strs_len += ft_strlen(strs[i++]);
	x = ((char *) malloc(strs_len + (size - 1) * ft_strlen(sep) + 1));
	temp = ft_strcat(x, strs[0]);
	i = 1;
	while (i < size)
	{
		temp = ft_strcat(temp, sep);
		temp = ft_strcat(temp, strs[i++]);
	}
	*temp = 0;
	return (x);
}

/*int main(void)
{
    char *strs[] = {"ciao", "come", "va"};
    char *res;

    res = ft_strjoin(3, strs, " ");
    if (!res)
        return (1);

    printf("%s\n", res);
    free(res);
    return (0);
}*/
