/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/22 07:47:51 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/10/29 10:29:07 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Valeur de retour : Le tableau des nouvelles chaînes résultant de la division.
//
NULL si l'allocation échoue.
//
Fonctions externes : malloc, free
Description : Alloue de la mémoire (à l'aide de malloc(3)) et renvoie un
tableau de chaînes obtenu en divisant les chaînes 
de caractères par des caractères génériques (s) à l'aide du
caractère 'c' comme délimiteur. Le tableau doit
se terminer par un pointeur NULL.
*/


#include "libft.h"

static int	ft_countword(char *s, char c)
{
	int	nb;
	int	i;

	nb = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}
static char	**ft_malloc_string(char *s, char c)
{
	char **string;
	int nb;
	int tab;
	int i;
	int j;
	
	string = NULL;
	nb = ft_countword((char *)s, c) + 1;
	tab = 0;
	i = 0;
	j = 0;
	while (tab <= nb)
	{
		while (s[i])
		{
			if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			{
				string[tab] = malloc(sizeof(char *) * (i - j) + 2);
				while (j < i)
				{
					string[tab][j] = s[j];
					j++;
				}
				tab++;
			}
			i++;
		}
	}
	return (string);
}


char **ft_split(char const *s, char c)
{
	int nb;
	char **string;
	
	nb = ft_countword((char *)s, c);
	string = malloc(sizeof(char *) * (nb + 1));
	if (!string)
		return (NULL);
	string = ft_malloc_string((char *)s, c);
	return (string);
}

int main(void)
{
	char *str = ",JAN,FEB,MAR,APR,,,,,,,,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC,";
	char *string[] = ft_countword(str, ',');
	int i = 0;
	while (*string[i])
	{
		printf("%s", &string[i]);
		i++;
	}
	return (0);
}