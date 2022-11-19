/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:52:13 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/12 14:33:35 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

# include	<stdio.h>
# include	<stdlib.h>
# include	<string.h>
# include	<unistd.h>

size_t	ft_strlen(const char *str );
char	*ft_strjoin(char *s1, char *s2);
int		ft_clean(char *str);
char	*get_next_line(int fd);

#endif