/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:07:33 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/20 15:54:33 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*maldives;
	const unsigned char	*wiki;
	size_t				i;

	maldives = dest;
	wiki = src;
	i = 0;
	if (!maldives && !wiki)
		return (0);
	if (wiki > maldives)
	{
		while (n > 0)
		{
			maldives[n] = wiki[n];
			n--;
		}
	}
	while (i < n)
	{
		maldives[i] = wiki[i];
		i++;
	}
	return (maldives);
}

// #include <stdio.h>
// int main(void)
// {
// 	char dest[100] = "vtt";
// 	char src[100] = "bmx";
// 	ft_memmove(dest, src, 2);
// 	printf("ma fonction : %s", dest);
// 	printf("\n");
// 	char dest2[100] = "vtt";
// 	char src2[100] = "bmx";
// 	memmove(dest2, src2, 2);
// 	printf("la fonction : %s", dest2);
// }