/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:20:19 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 17:17:37 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static char	*ft_itoa_numb(int n, int len, int sign, unsigned long int ten)
{
	char	*numb;
	int		i;

	numb = (char*)malloc(sizeof(char) * (len + sign + 1));
	if (!numb)
		return (NULL);
	i = 0;
	if (sign)
		numb[i++] = '-';
	while (i < (len + sign))
	{
		numb[i] = '0' + (n / ten);
		n %= ten;
		ten /= 10;
		i++;
	}
	numb[i] = '\0';
	return (numb);
}

char		*ft_itoa(int n)
{
	int					len;
	int					sign;
	unsigned long int	ten;

	if (n == INTMIN)
		return (ft_strcpy(ft_strnew(11), "-2147483648"));
	ten = 10;
	len = 1;
	sign = (n < 0) ? 1 : 0;
	n = ft_abs(n);
	while (n % (int)ten != n)
	{
		len++;
		ten *= 10;
	}
	ten /= 10;
	return (ft_itoa_numb(n, len, sign, ten));
}
