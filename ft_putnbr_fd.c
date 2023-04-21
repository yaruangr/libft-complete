/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:31:02 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/19 21:31:27 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	number;

	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		number = (unsigned int)(n * (-1));
	}
	else
		number = (unsigned int)n;
	if (number > 9)
	{
		ft_putnbr_fd(number / 10, fd);
		number = number % 10;
	}
	ft_putchar_fd(number + '0', fd);
}
//แปลงตัวเลขจำนวนเต็มที่รับเข้ามาให้เป็นสตริง
