/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:48:59 by jsarabia          #+#    #+#             */
/*   Updated: 2023/02/01 13:52:58 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	len;
	unsigned int	i;

	len = ft_strlen((char *)s);
	i = 0;
	while (i < len)
	{
		f(i, s + i);
		i++;
	}
}
/*
void f(unsigned int i, char *c)
{
	char	j;
	j = c[i] + 5;
	write(1, &j, 1);
}
int main()
{
	char str1[] = "abc";
	unsigned int n = 1;
	ft_striteri(str1, *f);
	return (0);
}
*/
