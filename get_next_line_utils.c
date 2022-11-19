/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vcacador <vcacador@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:28:02 by vcacador          #+#    #+#             */
/*   Updated: 2022/11/14 11:42:26 by vcacador         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

size_t	ft_strlen(const char *str )
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] && str[i] != '\n')
		i++;
	if (str[i] == '\n')
		i++;
	return (i);
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		v;
	char	*newstr;

	i = 0;
	v = 0;
	newstr = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!newstr)
		return (NULL);
	while (s1 && s1[v])
		newstr[i++] = s1[v++];
	v = 0;
	while (s2 && s2[v])
	{
		newstr[i] = s2[v++];
		if (newstr[i++] == '\n')
			break ;
	}
	newstr[i] = '\0';
	free (s1);
	return (newstr);
}

int	ft_clean(char *str)
{
	int	i;
	int	j;
	int	is_nwl;

	i = 0;
	j = 0;
	is_nwl = 0;
	while (str[i])
	{
		if (is_nwl)
			str[j++] = str[i];
		if (str[i] == '\n')
			is_nwl = 1;
		str[i] = '\0';
		i++;
	}
	return (is_nwl);
}
