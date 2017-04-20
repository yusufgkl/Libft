/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 16:03:16 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/27 13:49:57 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, const char *s2)
{
	int		i;
	int		j;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	j = 0;
	i = ft_strlen(s1);
	if ((join = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)))))
	{
		ft_strcpy(join, s1);
		while (s2[j] != '\0')
		{
			join[i] = s2[j];
			i++;
			j++;
		}
		join[i] = '\0';
		return (join);
	}
	else
		return (NULL);
}
