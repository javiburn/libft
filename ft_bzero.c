/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/12 12:33:40 by jsarabia          #+#    #+#             */
/*   Updated: 2023/01/13 12:19:28 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*c;

	c = (char *)s;
	i = 0;
	if (n > 0)
	{
		while (i < n)
		{
			*c++ = '\0';
			i++;
		}
	}
}
/*
int main()
{
	char	s[12] = "Hello world";
	printf("%s\n", s);
	ft_bzero(s+9, 1);
	printf("%s", s);
	return (0);
}






int main() {
    char s[11]= "Hello world";
    
    printf("Hello world");
    bzero(s+7, 1);
    
    printf("\n%s", s);
    
    return 0;
}
*/
