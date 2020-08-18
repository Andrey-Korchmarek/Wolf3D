/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:26:21 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 18:17:27 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*tmp;
	char			*result;
	unsigned int	i;

	if (ft_strplen((char*)s) + 1 == 0)
		return (NULL);
	result = (char*)malloc(sizeof(char) * (ft_strplen((char*)s) + 1));
	if (!s || !result)
		return (NULL);
	tmp = (char*)s;
	i = 0;
	while (tmp[i])
	{
		result[i] = f(i, tmp[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
