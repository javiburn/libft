/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsarabia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 14:41:24 by jsarabia          #+#    #+#             */
/*   Updated: 2023/02/06 14:35:15 by jsarabia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count(const char *s, char c)
{
	int	check;
	int	slices;

	check = 1;
	slices = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			slices++;
			check = 1;
		}
		else if (*s == c && check == 1)
			check = 0;
		s++;
	}
	return (slices + 1);
}

static char	*ft_sent(const char *s, int len, int n)
{
	char	*str;
	size_t	i;

	i = 0;
	if ((size_t)len + (size_t)n > ft_strlen((char *)s))
		return (NULL);
	else
	{
		str = (char *)malloc((size_t)len * sizeof(char) + 1);
		if (str == 0)
		{
			free(str);
			return (NULL);
		}
		while (i < (size_t)len)
			str[i++] = s[n++];
	}
	str[i] = '\0';
	return (str);
}

static char	**ft_pt(const char *s, char c)
{
	char	**ptr;

	ptr = (char **)ft_calloc((ft_count(s, c) + 1), sizeof(char *));
	if (!ptr || !s)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

char	**ft_split(const char *s, char c)
{
	size_t	n;
	size_t	len;
	size_t	i;
	char	**ptr;

	n = 0;
	i = 0;
	ptr = ft_pt(s, c);
	if (!ptr)
		return (NULL);
	len = 0;
	while (i < (size_t)ft_count(s, c) && n + len <= ft_strlen((char *)s))
	{
		if (s[n + len] != c && n + len < ft_strlen((char *)s))
			len++;
		else if ((s[n + len] == c || s[n + len] == '\0') && len > 0)
		{
			ptr[i++] = ft_sent(s, len, n);
			n = n + len;
			len = 0;
		}
		else if ((s[n + len] == c && len == 0) || s[n + len] == '\0')
			n++;
	}
	return (ptr);
}
