/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvienot <nvienot@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/12 21:23:06 by nvienot           #+#    #+#             */
/*   Updated: 2018/11/21 22:18:20 by nvienot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcapitalize(char *str)
{
	int i;
	int up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if (ft_isnumber(str[i]) == 1 || ft_islower(str[i]) == 1 ||
			ft_isupper(str[i]) == 1)
		{
			if (up && ft_islower(str[i]) == 1)
				str[i] = str[i] - 32;
			else if (!up && ft_isupper(str[i]) == 1)
				str[i] = str[i] + 32;
			up = 0;
		}
		else
			up = 1;
		i++;
	}
	return (str);
}
