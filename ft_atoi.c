/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:56:21 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:46:46 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

int	ft_atoi(const char *s)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	num = 0;
	while (s[i] == 32 || (s[i] >= 9 && s[i] <= 13))
		i++;
	if (s[i] == 45 || s[i] == 43)
	{
		if (s[i] == 45)
			sign *= -1;
		i++;
	}
	while (s[i] >= 48 && s[i] <= 57)
	{
		num = num * 10 + (s[i] - 48);
		i++;
	}
	return (num * sign);
}
/*
int	main(void)
{
	const char str[] = "   -428ABC";

	printf ("%d\n", ft_atoi(str));
	return (0);
}
*/