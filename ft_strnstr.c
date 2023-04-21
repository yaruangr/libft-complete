/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:52:53 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:27:23 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include    "libft.h"
//#include    <stdio.h>
//#include	<string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;
	size_t	i;
	char	*ptr;

	ptr = (char *) haystack;
	if (*needle == 0)
		return (ptr);
	if (len == 0)
		return (NULL);
	needle_len = ft_strlen(needle);
	i = 0;
	while ((ptr[i] != '\0') && ((i + needle_len) <= len))
	{
		if (ft_strncmp(&ptr[i], needle, needle_len) == 0)
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char	s;
	char	ss;
	ss[] = "up";
	s[] = "a cup of tea";
	printf("1: %s\n", ft_strnstr(s, ss, 10));
}
//ค้นหา *little ใน *big โดยการเปรียบเทียบ big ทีละตำแหน่ง
//จนกว่าค่าจะตรงกับ needle
*/