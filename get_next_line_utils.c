/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:22:01 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/03/03 16:26:11 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char
	*ft_strchr(const char *s, int c)
{
	if (!(*s))
	{
		if (!(char) c)
			return ((char *)s);
		return (0);
	}
	else
	{
		if (*s == (char) c)
			return ((char *) s);
		else
			return (ft_strchr(s + 1, c));
	}
}

size_t
	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char
	*ft_strjoin(char const *s1, char const *s2)
{
	char			*ptr;
	size_t			len1;
	size_t			len2;
	unsigned long	i;

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);
	ptr = (char *) malloc(sizeof(char) * (1 + len1 + len2));
	if (!ptr)
		return (0);
	i = 0;
	while (i < len1)
	{
		ptr[i] = s1[i];
		i++;
	}
	while (i < (len1 + len2))
	{
		ptr[i] = s2[i - len1];
		i++;
	}
	ptr[i] = 0;
	return (ptr);
}
