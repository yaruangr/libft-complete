/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 20:01:15 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/20 21:03:10 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	char	*str;
	int		i;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]) != 0)
		start++;
	if (end > 0)
	{
		while (s1[start] && ft_strchr(set, s1[end - 1]) != 0)
			end--;
	}
	str = (char *)malloc(sizeof(char) * (end - start + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = '\0';
	return (str);
}
/*
int	main(void)
{
    char	str[] = "lo pe rth et";
	char	set[] = "let";
	printf ("result	=%s\n", ft_strtrim(str, set));
}
ตัดข้างหน้า - หลัง *s1  ตามที่ระบุใน set
*/
