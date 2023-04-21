/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 19:23:35 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:07:29 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	if (dstsize <= dstlen)
		return (dstsize + srclen);
	i = 0;
	n = dstlen;
	while (src[i] != 0 && i < (dstsize - dstlen - 1))
	{
		dst[n] = src[i];
		i++;
		n++;
	}
	dst[n] = '\0';
	return (dstlen + srclen);
}
