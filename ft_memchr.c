/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:45:53 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:10:40 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int n, size_t len)
{
	unsigned char	*ptr;

	ptr = (unsigned char *) str;
	while (len > 0)
	{
		if (*ptr == (unsigned char) n)
			return (ptr);
		ptr++;
		len--;
	}
	return (NULL);
}
