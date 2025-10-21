/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 09:59:52 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/21 10:36:44 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str1;
	int		i;
	int		j;

	str1 = malloc(sizeof *s1 + *s2);
	if (!str1)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		str1[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str1[i] = s2[j];
		j++;
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char str1[100] = "ben";
// 	char str2[100] = " leplusfort";
// 	char *a = ft_strjoin(str1, str2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }