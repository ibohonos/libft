/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibohonos <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/28 18:59:49 by ibohonos          #+#    #+#             */
/*   Updated: 2017/11/07 14:58:32 by ibohonos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	ft_delim(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char		*ft_strtrim(char const *s)
{
	char	*a;
	int		i;

	if (!s)
		return (NULL);
	while (ft_delim(*s) == 1)
		s++;
	s = ft_strrev((char *)s);
	while (ft_delim(*s) == 1)
		s++;
	s = ft_strrev((char *)s);
	a = (char *)malloc(sizeof(char) * ft_strlen((char *)s) + 1);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
