/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 18:42:22 by mashley           #+#    #+#             */
/*   Updated: 2019/09/28 14:46:52 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# define BUFF_SIZE 22
# define MAX_FD 12000

# include "libft.h"

int		get_next_line(const int fd, char **line);
int		ft_wdcounter(char const *str, char c);

#endif
