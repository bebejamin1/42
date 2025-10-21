/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 08:14:53 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/21 10:35:51 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	unsigned int i;

	i = 0;
	str = malloc(sizeof *s);
	if (!str)
		return (NULL);
	len = len + start;
	while (s[start] && start < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

// int main(void)
// {
// 	unsigned int start = 2;
// 	size_t len = 2;
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	printf("\nsize %u\n", start);
// 	char str[100] = "blablablablabla";
// 	char *a = ft_substr(str, start, len);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }