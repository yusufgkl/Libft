/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 19:09:18 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/30 04:53:18 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*fresh;

	if ((fresh = (char *)malloc(sizeof(char) * size + 1)) == NULL)
		return (NULL);
	ft_bzero(fresh, size + 1);
	return (fresh);
}
