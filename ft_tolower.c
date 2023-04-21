/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 20:54:52 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 20:34:13 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (c + 32);
	}
	return (c);
}

/*int	main(void)
{
	printf ("%c\n", ft_tolower('J'));
	return (0);
}*/
