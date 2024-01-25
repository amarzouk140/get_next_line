/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarzouk <amarzouk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 18:02:27 by amarzouk          #+#    #+#             */
/*   Updated: 2023/12/07 15:35:07 by amarzouk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <fcntl.h>
# include <limits.h>
# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

int		ft_strlen(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_str_init(void);
char	*ft_strjoin(char *s1, char *s2);
char	*read_string(int fd, char *str);
char	*skip_and_free(char *str);
char	*copy_line(char *str);
char	*get_next_line(int fd);

#endif
