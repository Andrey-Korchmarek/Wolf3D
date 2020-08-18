/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 11:08:20 by mashley           #+#    #+#             */
/*   Updated: 2019/09/18 11:08:42 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

size_t		ft_strnlen(const char *string, size_t max)
{
	size_t	len;

	len = 0;
	while (string[len] != '\0' && len < max)
		len++;
	return (len);
}
