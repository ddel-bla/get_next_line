/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:21:51 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/03/03 18:21:01 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char
	*get_next_line(int fd)
{
	char	*ptr;
	char	*tmp;
	int		tot_rd;

	if (!BUFFER_SIZE || fd < 0)
		return (NULL);
	tmp = (char *) malloc(BUFFER_SIZE + 1);
	if (!tmp)
		return (NULL);
	tot_rd = BUFFER_SIZE;
	ptr = 0;
	while (tot_rd == BUFFER_SIZE && !(ft_strchr(tmp, '\n')))
	{
		tot_rd = read(fd, tmp, BUFFER_SIZE);
		if (tot_rd == -1)
		{
			free(tmp);
			return (NULL);
		}
		tmp[tot_rd] = 0;
		ptr = ft_strjoin(ptr, tmp);
	}
	free(tmp);
	return (ptr);
}
