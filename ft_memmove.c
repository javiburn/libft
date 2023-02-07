/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 15:54:05 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/26 13:45:54 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*s;
	char	*d;
	size_t	i;

	i = 0;
	s = (char *)src;
	d = (char *)dest;
	if (dest == 0 && src == 0)
		return (NULL);
	if (dest <= src)
	{
		while (i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		while (n-- > 0)
			d[n] = s[n];
	}
	return (dest);
}
/*
int main()
{
	char src[30] = "lorem ipsum dolor sit a";
    char dest[9] = "l";
	char *p;
    printf("src: %s y dest: %s", src, dest);
    p = ft_memmove(((void *)0), ((void *)0), 8);
    printf("\nsrc: %s y dest: %s y %s", src, dest, p);
}
*/
