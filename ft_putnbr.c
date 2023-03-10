/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-bouc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/17 01:27:18 by yataji            #+#    #+#             */
/*   Updated: 2019/04/17 01:32:28 by yataji           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long	n1;

	n1 = n;
	if (n1 < 0)
	{
		ft_putchar('-');
		n1 = n1 * (-1);
	}
	if (n1 > 9)
	{
		ft_putnbr(n1 / 10);
		ft_putnbr(n1 % 10);
	}
	else
	{
		ft_putchar(n1 + 48);
	}
}
