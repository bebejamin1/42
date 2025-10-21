/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai < bbeaurai@student.42lehavre.f    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 10:20:35 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/21 15:06:04 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_checkleft(char *str, char *check)
{
	int	i;
	int j;
	int compteur;

	i = 0;
	j = 0;
	compteur = 0;
	while (check[j])
	{
		while (str[i] - check[j] == 0)
		{
			i++;
			compteur++;
		}
		j++;
	}
	return (compteur);
}

static int	ft_checkright(char *str, char *check)
{
	int	i;
	int	j;
	int	compteur;

	i = 0;
	j = 0;
	while (str[i])
		i++;
	compteur = i;
	while (check[j])
		j++;
	while (j >= 0)
	{
		while (str[i] - check[j] == 0)
		{
			i--;
			compteur--;
		}
		j--;
	}
	return (compteur);
	}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		a;
	int		z;
	int		i;

	i = 0;
	a = ft_checkleft((char *)s1, (char *)set);
	z = ft_checkright((char *)s1, (char *)set);
	str = malloc(sizeof (char) * (z - a) + 2);
	if (!str)
		return (NULL);
	if (a > 0 && z > 0)
	{
		while (a <= z)
		{
			str[i] = (char)s1[a];
			a++;
			i++;
		}
		str[i] = 0;
		return (str);
	}
	return (NULL);
}
// int main(void)
// {
// 	//
// 	// ********************|Ma Fonction|*******************
// 	//
// 	char str1[100] = "aaaaaaaala mortaaaaaaaaakm";
// 	char str2[100] = "akm";
// 	char *a = ft_strtrim(str1, str2);
// 	printf("\n\n\t\t\033[91;01m|Ma Fonction|\033[00m");
// 	printf("\n\nResult : %s\n", a);
// 	free (a);
// }
