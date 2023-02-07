/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/11 13:23:19 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/25 18:01:12 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *str, int c, size_t len)
{
	char	*s;
	size_t	i;

	i = 0;
	s = (char *)str;
	while (i < len)
		s[i++] = c;
	return (str);
}
/*
int main()
{
	char str[12] = "Hello world";
	printf("Before memset: %s", str);

	ft_memset(str + 1, '\0', 5);
	printf("\nAfter memset: %s\n", str);

	return (0);
}
*/
