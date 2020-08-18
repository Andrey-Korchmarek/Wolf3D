/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoll.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <mashley@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 19:14:05 by mashley           #+#    #+#             */
/*   Updated: 2019/09/18 17:07:04 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

long long int		ft_atoll(const char *str)
{
	long long int	numb;
	int				sign;

	sign = 1;
	numb = 0;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		sign = -1;
	if (*str == '-' || *str == '+')
		str++;
	while (*str && *str >= '0' && *str <= '9')
	{
		numb = numb * 10 + (*str - '0');
		str++;
	}
	if (numb < 0)
	{
		if (sign < 0)
			return (0);
		else
			return (-1);
	}
	else
		return (numb * sign);
}
