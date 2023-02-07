/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:03:22 by jsarabia          #+#    #+#             */
/*   Updated: 2023/02/02 13:43:30 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	n;

	n = 0;
	while (s[n] != '\0' && s)
		write(fd, &s[n++], 1);
}
/*
int main()
{
	char	*s = "Hello world";
	ft_putstr_fd(s, 1);
	return (0);
}
*/
