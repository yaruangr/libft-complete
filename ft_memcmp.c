/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:41:42 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:10:24 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *) s1;
	p2 = (unsigned char *) s2;
	while (n > 0)
	{
		if (*p1 != *p2)
			return (*p1 - *p2);
		p1++;
		p2++;
		n--;
	}
	return (0);
}
/*
int	main (void)
{
	char s2[] = {0, 0, 127, 0};
	char s3[] = {0, 0, 42, 0};
	printf("s2 : %d\n",sizeof(s2));
	printf("s2 : %d\n",sizeof(s3));
	printf("%d\n", memcmp(s2, s3, sizeof(s2)));
	printf("%d\n", ft_memcmp(s2, s3, sizeof(s2)));
	return(0);
}
เปรียบเทียบค่าใน *s1 และ *s2 ถ้าค่าในตำแหน่งไหนไม่เท่ากัน
ตำแหน่งนั้น *s1 - *s2
*/