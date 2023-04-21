/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:11:19 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:50:21 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = (char *)s + len;
	if ((char)c == 0)
		return (ptr++);
	while (ptr >= s)
	{
		if (*ptr == (char)c)
			return (ptr);
		ptr--;
	}
	return (NULL);
}

/*int	main(void)
{

	printf ("%d\n", const char str, int);
	return (0);
}
*/