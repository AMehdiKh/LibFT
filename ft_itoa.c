/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-khel <ael-khel@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 10:59:51 by ael-khel          #+#    #+#             */
/*   Updated: 2022/10/15 10:59:51 by ael-khel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_nbrlen(int n)
{
	unsigned int	nbrlen;

	nbrlen = 0;
	if (n <= 0)
		++nbrlen;
	while (n)
	{
		++nbrlen;
		n /= 10;
	}
	return (nbrlen);
}

char	*ft_itoa(int n)
{
	unsigned int	nbrlen;
	unsigned int	nbr;
	char			*s;

	nbrlen = ft_nbrlen(n);
	s = malloc(nbrlen + 1);
	if (!s)
		return (NULL);
	s[nbrlen--] = '\0';
	if (n == 0)
		*s = '0';
	if (n < 0)
	{
		*s = '-';
		nbr = -n;
	}
	else
		nbr = n;
	while (nbr)
	{
		s[nbrlen--] = (nbr % 10) + 48;
		nbr /= 10;
	}
	return (s);
}
