/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/17 13:11:10 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/27 12:09:56 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	char	*ptr;
	size_t	i;

	i = 0;
	ptr = (char *)malloc(n * size);
	if (!ptr)
		return (NULL);
	while (i < (n * size))
		ptr[i++] = 0;
	return (ptr);
}
/*
int main()
{
	char		*patin;
	int	piti = 6;
	int p = 0;

	patin = (char *)ft_calloc(4, 20);
	while (p < 20)
	{
		printf("%c", patin[p]);
		p++;
	}
	p = 0;
	while (p < 20)
	{
		patin[p] = 'a';
		printf("%c", patin[p]);
		p++;
	}
	free(patin);

	return (0);
}
*/
