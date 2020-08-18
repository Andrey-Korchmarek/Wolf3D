/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 18:42:14 by mashley           #+#    #+#             */
/*   Updated: 2019/09/28 14:43:26 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	gnl_ifstacknotempty(char **stack, char **line)
{
	char	*tmp;

	if ((tmp = ft_strchr(*stack, '\n')))
	{
		*tmp = '\0';
		tmp++;
		*line = ft_strjoinfree(*line, *stack, 1, 0);
		if (*stack)
		{
			free(*stack);
			*stack = NULL;
		}
		*stack = ft_strdup(tmp);
		return (1);
	}
	else
	{
		*line = ft_strjoinfree(*line, *stack, 1, 0);
		if (*stack)
		{
			free(*stack);
			*stack = NULL;
		}
		return (0);
	}
}

int			get_next_line(const int fd, char **line)
{
	static char	*stack[OPEN_MAX];
	char		buf[BUFF_SIZE + 1];
	int			ret;
	char		*heap;

	if (!line || fd < 0 || (read(fd, stack[0], 0) < 0) || BUFF_SIZE < 1)
	{
		ft_strdel(&stack[fd]);
		return (-1);
	}

	*line = ft_strnew(0);
	if (stack[fd])
		if (gnl_ifstacknotempty(&stack[fd], line))
			return (1);
	while ((ret = read(fd, buf, BUFF_SIZE)))
	{
		buf[ret] = '\0';
		if ((heap = ft_strchr(buf, '\n')))
		{
			*heap = '\0';
			heap++;
			if (stack[fd]) {
				free(stack[fd]);
				stack[fd] = NULL;
			}
			stack[fd] = ft_strdup(heap);
			*line = ft_strjoinfree(*line, buf, 1, 0);
			if (stack[fd]) {
				free(stack[fd]);
				stack[fd] = NULL;
			}
			return (1);
		}
		*line = ft_strjoinfree(*line, buf, 1, 0);
	}
	if (stack[fd]) {
		free(stack[fd]);
	}
	if (*line[0])
		return (1);
	ft_strdel(&stack[fd]);
	return (0);
}
