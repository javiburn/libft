/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/16 13:21:59 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/16 14:25:34 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*p;
	char	ch;

	i = 0;
	ch = (char)c;
	while (i < n)
	{
		p = (char *)s++;
		if (*p == ch)
			return ((void *)p);
		i++;
	}
	return (NULL);
}
