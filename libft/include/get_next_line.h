/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laprieur <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 11:59:02 by laprieur          #+#    #+#             */
/*   Updated: 2023/02/07 13:38:38 by laprieur         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include "libft.h"
# include <unistd.h>
# include <stdlib.h>

char	*get_next_line(int fd);
char	*ft_readfd(int fd, char *stash);
int		ft_checknl(char *stash);
char	*ft_definestash(char *buf, char *stash);
size_t	ft_strlen(const char *s);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_defineline(char *stash, char *line);
int		ft_definelinesize(char *stash);
char	*ft_clean_stash(char *stash);
char	*ft_strcpy(char *dest, const char *src, int position, int size);

#endif
