/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 11:25:36 by Ael-khel          #+#    #+#             */
/*   Updated: 2022/10/15 11:04:46 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;

	if (!haystack && !len)
		return (NULL);
	if (!(*needle))
		return ((char *)haystack);
	while (*haystack && len)
	{
		i = 0;
		while (needle[i] == haystack[i] && i < len && haystack[i])
			++i;
		if (needle[i] == '\0')
			return ((char *)haystack);
		++haystack;
		--len;
	}
	return (NULL);
}
