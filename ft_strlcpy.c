/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvienot <nvienot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 15:56:24 by nvienot           #+#    #+#             */
/*   Updated: 2018/11/21 18:24:51 by nvienot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;

	d = 0;
	s = 0;
	if (!dst || !src)
		return (0);
	while (size > 1 && src[d])
	{
		dst[d] = src[s];
		d++;
		s++;
		size--;
	}
	if (size >= 1)
		dst[d] = '\0';
	d = ft_strlen(src);
	return (d);
}
