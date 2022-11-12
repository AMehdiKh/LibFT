/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 11:04:59 by ael-khel          #+#    #+#             */
/*   Updated: 2022/10/15 11:04:59 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trm;
	size_t	i;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	while (ft_strchr(set, *s1) && *s1)
		++s1;
	if (*s1)
	{
		i = ft_strlen(s1);
		while (ft_strchr(set, s1[--i]))
			;
		++i;
	}
	trm = malloc(i + 1);
	if (!trm)
		return (NULL);
	ft_strlcpy(trm, s1, i + 1);
	return (trm);
}
