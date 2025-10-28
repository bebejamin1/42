/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:47:51 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/28 17:25:54 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countword(char *s, char c)
{
	int	nb;
	int	i;

	nb = 1;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c)
		{
			nb++;
		}
		printf("nb = %d\n", nb);
		i++;
	}
	return (nb);
}

char **ft_split(char const *s, char c)
{
	int i;
	
	char **string1;

	i = ft_countword((char *)s, c);
	
	string1 = NULL;
	return (string1);
}

int main(void)
{
	char *str = ",JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,";
	printf("%d", ft_countword(str, ','));
}