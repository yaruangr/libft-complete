/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 21:46:20 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 19:10:57 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*p;

	if (count == SIZE_MAX || size == SIZE_MAX)
		return (NULL);
	p = (void *)malloc(count * size);
	if (p == NULL)
		return (NULL);
	ft_bzero(p, size * count);
	return (p);
}
//จองพื้นที่หน่วยความจำและกำหนดพื้นที่จองเป็น 0
