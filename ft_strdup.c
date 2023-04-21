/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:48:48 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:04:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;
	size_t	len;

	len = ft_strlen(s1) + 1;
	p = (char *)malloc(sizeof(char) * len);
	if (p == NULL)
		return (NULL);
	ft_strlcpy(p, s1, len);
	return (p);
}
/*
int main(void)
{
    char s[] = "hello";
    printf("%s\n", ft_strdup(s));
	char sd[] = "hello";
	printf("%s\n", strdup(sd));
}
copy string โดยมีการจองพื้นที่ในหน่วยความจำ
*/
