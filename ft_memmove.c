/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 07:07:33 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/07 10:36:31 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*dest2;
	unsigned char		*src2;
	size_t				i;

	i = 0;
	dest2 = (unsigned char *)dest;
	src2 = (unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while (n > i)
		{
			dest2[n - 1] = src2[n - 1];
			n--;
		}
		return (dest2);
	}
	while (i < n)
	{
		dest2[i] = src2[i];
		i++;
	}
	return (dest2);
}

// int		main(int argc, const char *argv[])
// {
// 	char	src[] = "lorem ipsum dolor sit amet";
// 	char	src2[] = "lorem ipsum dolor sit amet";
// 	char	*dest;
// 	char	*dest2;
// 	int		arg;

// 	dest = src + 1;
// 	dest2 = src2 + 1;
// 	if (argc == 1)
// 		return (0);
// 	else if ((arg = atoi(argv[1])) == 1)
// 	{
// 		ft_memmove(dest, "consectetur", 5);
// 		memmove(dest2, "consectetur", 5);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// 	}
// 	else if (arg == 2)
// 	{
// 		ft_memmove(dest, "con\0sec\0\0te\0tur", 10);
// 		memmove(dest2, "con\0sec\0\0te\0tur", 10);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// 	}
// 	else if (arg == 3)
// 	{
// 		ft_memmove(dest, src, 8);
// 		memmove(dest2, src, 8);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// 	}
// 	else if (arg == 4)
// 	{
// 		ft_memmove(src, dest, 8);
// 		memmove(src, dest2, 8);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// 	}
// 	else if (arg == 5)
// 	{
// 		ft_memmove(src, dest, 0);
// 		memmove(src, dest2, 0);
// 		printf("\nla fonction : %s\n", dest2);
// 		printf("\nma fonction : %s\n", dest);
// 	}
// 	return (0);
// }
