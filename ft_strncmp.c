/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/18 23:36:29 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/21 20:36:49 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n && ((*s1 == *s2) && *s1 && *s2))
	{
		i++;
		s1++;
		s2++;
	}
	if (i < n)
		return ((unsigned char)*s1 - (unsigned char)*s2);
	return (0);
}
