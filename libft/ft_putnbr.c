/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mminenko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:01:26 by mminenko          #+#    #+#             */
/*   Updated: 2017/11/08 13:01:29 by mminenko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void					ft_putnbr(long long n)
{
	unsigned long long	nb1;

	nb1 = n;
	if (n < 0)
	{
		ft_putchar('-');
		nb1 = n * (-1);
	}
	if (nb1 > 9)
	{
		ft_putnbr(nb1 / 10);
	}
	ft_putchar(48 + nb1 % 10);
}
