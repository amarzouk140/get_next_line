/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:40 by amarzouk          #+#    #+#             */
/*   Updated: 2023/12/06 16:25:09 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	if (!str)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}

char	*ft_str_init(void)
{
	char	*str;

	str = (char *)malloc(1 * sizeof(char));
	str[0] = 0;
	return (str);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*strj;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_str_init();
	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	strj = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!strj)
		return (0);
	while (s1[i])
	{
		strj[i] = s1[i];
		i++;
	}
	while (s2[j])
		strj[i++] = s2[j++];
	strj[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	free(s1);
	return (strj);
}