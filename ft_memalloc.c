/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:22:18 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/16 19:50:34 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*zone;
	int		i;

	i = 0;
	if ((zone = malloc(size)) == NULL)
		return (NULL);
	ft_bzero(zone, size);
	return (zone);
}
