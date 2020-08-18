/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoinfree.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/02 17:13:25 by mashley           #+#    #+#             */
/*   Updated: 2019/10/02 17:21:09 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strjoinfree(char const *s1, char const *s2, int frees1, int frees2)
{
	char	*str;
	size_t	len;

	len = ft_strplen(s1) + ft_strplen(s2) + 1;
	if (!s1 || !s2)
		return (NULL);
	if (len == 0 || len < ft_strplen(s1) || len < ft_strplen(s2))
		return (NULL);
	str = (char*)malloc(sizeof(char) * len);
	if (!str)
		return (NULL);
	ft_strcpy(str, s1);
	ft_strcat(str, s2);
	if (s1 == s2 && (frees1 || frees2))
	{
		free((char*)s1);
		return (str);
	}
	if (frees1)
		free((char*)s1);
	if (frees2)
		free((char*)s2);
	return (str);
}
