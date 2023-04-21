/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaruangr <yaruangr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/17 23:06:59 by yaruangr          #+#    #+#             */
/*   Updated: 2023/04/20 20:58:29 by yaruangr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>

int	ft_isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/*int main(void)
{
    int i;
    for (i = 0; i <= 127; i++)
        printf("ascii(%d) = %d\n",i, ft_isalpha(i));
    //printf("%d\n", ft_isalpha('o'));
    return (0);
}
*/
