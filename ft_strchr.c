/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 21:07:05 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:53:07 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != (char)c)
	{
		if (*s == '\0')
			return (0);
		s++;
	}
	return ((char *)s);
}

/*int	main(void)
{
	char str[] = " juikdfvcg";
	char c = 'd';
	printf ("%d\n", ft_strchr(str,c));
	return (0);
}*/
