/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 16:07:06 by mashley           #+#    #+#             */
/*   Updated: 2019/09/18 16:08:00 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int	ft_intlen(int nbr)
{
	int			len;
	long int	unbr;

	if (nbr == 0)
		return (1);
	if (nbr < 0)
		unbr = -nbr;
	else
		unbr = nbr;
	len = 0;
	while (unbr > 0)
	{
		len++;
		unbr /= 10;
	}
	return (len);
}
