/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:14:23 by jsarabia          #+#    #+#             */
/*   Updated: 2023/02/01 13:30:14 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while (s[n] != '\0')
		write(fd, &s[n++], 1);
	write(fd, "\n", 1);
}
/*
#include <unistd.h>
int main()
{
	char	*s = "the cake is a lie !\0I'm hidden lol\r\n";
	ft_putendl_fd(s, 1);
	write(1, "|", 1);
	return (0);
}
*/
