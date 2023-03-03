/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddel-bla <ddel-bla@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/03 13:22:03 by ddel-bla          #+#    #+#             */
/*   Updated: 2023/03/03 16:29:46 by ddel-bla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <stdlib.h>
# include <unistd.h>

char
	*get_next_line(int fd);
char
	*ft_strchr(const char *s, int c);
char
	*ft_strjoin(char const *s1, char const *s2);
size_t
	ft_strlen(const char *s);

#endif