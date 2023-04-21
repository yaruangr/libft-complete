/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 20:27:06 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:38:15 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include    <stdio.h>
//#include    <string.h>

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)str;
	while (n--)
		*p++ = (unsigned char)c;
	return (str);
}

/*
int main(void)
{
    char str[] = "Good morning teacher. How are you today?";
    size_t n;
    
    unsigned char c = 'x';
    n = 4;
    
    ft_memset(str, c, n);    
    printf ("%s\n", str);
    return (0);
}
*/