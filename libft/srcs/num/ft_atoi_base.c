/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/29 13:33:28 by user              #+#    #+#             */
/*   Updated: 2020/05/29 14:28:10 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_atoi_base(const char *str, int base)
{
	static const char	alphabet[] = "0123456789abcdef";
	int					res;
	const char			*char_pos;
	int					sign;

	sign = (base == 10 && *str == '-') ? -1 : 1;
	if (base == 10 && *str == '-')
		str += 1;
	else if (base == 16 && str[0] == '0' && (str[1] == 'x' || str[1] == 'X'))
		str += 2;
	res = 0;
	while (1)
	{
		char_pos = ft_memchr(alphabet, ft_tolower(*str), base);
		if (!char_pos)
			break ;
		res = res * base + (char_pos - alphabet);
		str += 1;
	}
	return (res * sign);
}
