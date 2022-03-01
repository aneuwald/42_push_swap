/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acanterg <acanterg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/05 18:28:30 by acanterg          #+#    #+#             */
/*   Updated: 2021/09/03 15:40:59 by acanterg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_putnbr(int n)
{
	uint64_t	holder;

	holder = n;
	if (holder >= 10)
	{
		ft_putnbr(holder / 10);
		ft_putnbr(holder % 10);
	}
	else
		ft_putchar(holder + '0');
}
