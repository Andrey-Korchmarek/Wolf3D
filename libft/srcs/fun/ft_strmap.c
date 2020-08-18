/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 11:13:39 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 14:38:00 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*tmp;
	char	*result;
	size_t	i;

	if (!s || !f)
		return (NULL);
	if (ft_strplen((char*)s) + 1 == 0)
		return (NULL);
	result = (char*)malloc(sizeof(*s) * (ft_strplen((char*)s) + 1));
	if (!result)
		return (NULL);
	tmp = (char*)s;
	i = 0;
	while (tmp[i])
	{
		result[i] = f(tmp[i]);
		i++;
	}
	result[i] = '\0';
	return (result);
}
