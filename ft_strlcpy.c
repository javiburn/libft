/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 16:36:49 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/27 15:35:36 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;

	i = 0;
	if (n == 0)
	{
		while (src[i] != '\0')
			i++;
		return (i);
	}
	while ((i < n - 1) && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	i = 0;
	while (src[i] != '\0')
		i++;
	return (i);
}
/*
int main()
{
	char string[19] = "Hello there, Venus";
	char dest[5];
	char dest2[19];
	char dest3[19];
	char dest4[19];
	int n = 19;
	int r;
	
	r = ft_strlcpy(dest, string, n);
	printf("Copied '%s' into '%s', length %d\n",
            string,
            dest,
            r
          );
	n = 18;
	r = ft_strlcpy(dest2, string, n);
	printf("Copied '%s' into '%s', length %d\n",
            string,
            dest2,
            r
          );
	n = 1;
	r = ft_strlcpy(dest3, string, n);
	printf("Copied '%s' into '%s', length %d\n",
            string,
            dest3,
            r
          );
	n = 0;
	r = ft_strlcpy(dest, string, n);
	printf("Copied '%s' into '%s', length %d\n",
            string,
            dest4,
            r
          );
}
*/
