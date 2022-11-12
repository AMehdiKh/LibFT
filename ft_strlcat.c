/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 10:21:49 by Ael-khel          #+#    #+#             */
/*   Updated: 2022/10/15 11:04:14 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dtlen;
	size_t	sclen;

	if (!dst && !size)
		return (0);
	dtlen = ft_strlen(dst);
	sclen = ft_strlen(src);
	if (size <= dtlen)
		return (size + sclen);
	dst = (dst + dtlen);
	ft_strlcpy(dst, src, (size - dtlen));
	return (dtlen + sclen);
}
