/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:08:05 by mashley           #+#    #+#             */
/*   Updated: 2019/09/19 19:52:03 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strtrim(char const *s)
{
	char	*str;
	size_t	start;
	size_t	finish;

	if (!s)
		return (NULL);
	start = 0;
	while (ft_isspace(s[start]))
		start++;
	finish = ft_strlen(s);
	while (finish && ft_isspace(s[finish - 1]))
		finish--;
	if (!finish)
		return (ft_strnew(0));
	str = ft_strsub(s, start, (finish - start));
	return (str);
}
