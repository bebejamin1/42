/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 10:26:48 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/21 14:21:11 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	l_dst;
	size_t	l_src;

	l_dst = ft_strlen(dst);
	l_src = ft_strlen(src);
	i = 0;
	if (size == 0)
		return (l_src);
	if (l_dst < size)
	{
		while (l_dst < (size - 1) && src[i])
		{
			dst[l_dst + i] = src[i];
			i++;
		}
		dst[l_dst + i] = '\0';
		return (l_dst + l_src);
	}
	if (l_dst == 0)
		return (ft_strlcpy(dst, src, size));
	else if (l_src == 0)
		return (size);
	return (l_src + size);
}

// #include <stdio.h>
// #include <bsd/string.h>
// int main(void)
// {
// 	size_t size = 5;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	printf("\nsize %zu\n", size);
// 	char dest[] = "";
// 	char src[] = "HAAAA";
// 	size_t b = ft_strlcat(dest, src, size);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\nTaille : %zu", b);
// 	printf("\nResult : %s\n", dest);
// 	//
// 	// ********************|La Fonction|********************
// 	//
// 	char dest2[] = "";
// 	char src2[] = "HAAAA";
// 	size_t a = strlcat(dest2, src2, size);
// 	printf("\n\t\t\033[92;01m|La Fonction|\033[00m");
// 	printf("\nTaille : %zu", a);
// 	printf("\nResult : %s", dest2);
// 	//
// 	// ********************|Ternaire|********************
// 	//
// 	int c = (a == b) ? 1 : 0;
// 	int v = 5;
// 	int i = 0;
// 	while (dest[i] || dest2[i])
// 	{
// 		v = (dest[i] - dest2[i] == 0) ? 1 : 0;
// 		if (v == 0)
// 			while (dest[i] || dest2[i])
// 				i++;
// 		i++;
// 	}
// 	if (c == 0 || v == 0)
// 	{
// 		if (c == 0)
// 		{
// 			printf("\n\033[41;01m/!\\Erreur\033[00m");
// 			printf("\n\033[21;01m*Problem : Taille\033[00m");
// 		}
// 		else if (v == 0)
// 		{
// 			printf("\n\033[41;01m/!\\Erreur\033[00m");
// 			printf("\n\033[21;01m*Problem : Result\033[00m");
// 		}
// 		return (printf("aie"));
// 	}
// 	printf("\n\033[42;01mOK\033[00m");
// 	return (1);
// }