/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 18:05:48 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/23 18:57:07 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*str;
	unsigned int	len;
	unsigned int	n;

	n = 0;
	len = ft_strlen((char *)s);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str || !s || !f)
		return (NULL);
	while (n < len)
	{
		str[n] = f(n, s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
/*
char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}
*/
