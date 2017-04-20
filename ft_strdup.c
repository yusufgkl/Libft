/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/03 20:47:02 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/14 21:20:51 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	int		srclen;
	int		i;
	char	*str;

	i = 0;
	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	if ((str = (char *)malloc(sizeof(char) * (srclen + 1))) == NULL)
		return (NULL);
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	str[i] = 0;
	return (str);
}
