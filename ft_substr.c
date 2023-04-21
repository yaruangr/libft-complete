/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:50:10 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:44:15 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_s;
	size_t	sub_n;
	size_t	i;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start || len == 0)
		return (ft_strdup(""));
	i = ft_strlen(&s[start]);
	if (len > i)
		sub_n = i + 1;
	else
		sub_n = len + 1;
	sub_s = (char *)malloc(sub_n * sizeof(char));
	if (sub_s == 0)
		return (0);
	ft_strlcpy(sub_s, &s[start], sub_n);
	return (sub_s);
}

/*
int	main(void)
{
	char s1[] = "hello oh mg";
	printf("%s\n", ft_substr(s1, 2, 5));
}
ค้นหาตำแหน่ง start ใน *s แล้วคึนค่าตั้งแต่ตำแหน่งที่ start
ตามจำนวน len
*/
