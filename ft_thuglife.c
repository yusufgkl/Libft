/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_thuglife.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygokol <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 11:07:17 by ygokol            #+#    #+#             */
/*   Updated: 2016/11/23 11:07:27 by ygokol           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_thuglife(void)
{
	ft_putstr("\e[1;1H\e[2J");
	ft_putstr("\n \n \n \n");
	ft_putstr("				(•_•) / \n");
	sleep(1);
	ft_putstr("\e[1;1H\e[2J");
	ft_putstr("\n \n \n \n");
	ft_putstr("				( •_•)>⌐■-■ \n");
	sleep(1);
	ft_putstr("\e[1;1H\e[2J");
	ft_putstr("\n \n \n \n");
	ft_putstr("				(⌐■_■)\n");
	sleep(1);
	ft_putstr("			   __ THUG LIFE __\n");
}
