/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 14:34:10 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/20 20:58:07 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"
//#include	<stdio.h>
//#include	<string.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = s;
	while (n--)
		*str++ = 0;
}

/*
int	main(void)
{
	char s[] = "42BKK";
	size_t i;
	
	i = sizeof(s);
	
	ft_bzero(s, i); 
	printf ("%s\n", s);
	return (0);
}*/
