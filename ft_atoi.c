/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 18:07:58 by ygokol            #+#    #+#             */
/*   Updated: 2017/01/10 20:49:26 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	char	*p;
	int		i;
	int		neg;
	int		nb;

	p = (char*)str;
	i = 0;
	neg = 1;
	nb = 0;
	while (ft_charblank(p[i]))
		i++;
	if (p[i] == '-' && ft_isdigit(p[i + 1]))
	{
		neg = -1;
		i++;
	}
	if (p[i] == '+' && ft_isdigit(p[i + 1]))
		i++;
	if ((p[i] == '-' || p[i] == '+') && !ft_isdigit(p[i + 1]))
		neg = 0;
	while (ft_isdigit(p[i]))
		nb = nb * 10 + p[i++] - '0';
	return (nb * neg);
}
