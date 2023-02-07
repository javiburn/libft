/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/24 14:21:05 by jsarabia          #+#    #+#             */
/*   Updated: 2023/02/01 16:25:04 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	if (n < 0 && n != -2147483648)
	{
		write(fd, "-", 1);
		n = n * (-1);
	}
	while (n > 9)
	{
		ft_putnbr_fd(n / 10, fd);
		n = n % 10;
	}
	if (n >= 0 && n <= 9)
	{
		n = n + '0';
		write(fd, &n, 1);
	}
}
/*
#include <unistd.h>
int main()
{
	int	n = -234567654;
	int fd = 1;
	ft_putnbr_fd(n, fd);
	return (0);
}
*/
