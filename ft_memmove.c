/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/12 22:17:56 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:09:58 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
//#include    <stdio.h>
//#include    <string.h>

void	*ft_memmove(void *destination, const void *source, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)destination;
	s = (unsigned char *)source;
	if (d == s || len == 0)
		return (d);
	if (d > s && (s + len) > d)
		while (len--)
			d[len] = s[len];
	else
	{
		while (len--)
			*d++ = *s++;
		return (destination);
	}
	return (d);
}
/*
int main(void)
{
    char cSrc[] = "berger";
    char cDest[] = "fish and ships";
    ft_memmove(cDest, cSrc, 11);
    printf("mine: %s\n", cDest);
    char cSrc1[] = "berger";
    char cDest1[] = "fish and ships";
    memmove(cDest1, cSrc1, 11);
    printf("result: %s\n", cDest1);
เหมือน ft_memcpy แต่มีการตรวจสอบว่า
พื้นที่ที่จะคัดลอกมีการทับซ้อนไหม ถ่้ามีก็ copy เหมืิอนเดิม
}
*/