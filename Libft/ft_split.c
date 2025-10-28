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

	nb = 0;
	i = 0;
	while (s[i])
	{
		// Si on tombe sur un caractère NON séparateur
		// et que le suivant est un séparateur ou la fin -> on compte 1 mot
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			nb++;
		i++;
	}
	return (nb);
}


int	main(void)
{
	char *test1 = ",JAN,FEB,MAR,APR,,,,MAY,JUN,JUL,,AUG,SEP,OCT,NOV,DEC,";
	char *test2 = "   Hello   world this  is   C  !  ";
	char *test3 = "42";
	char *test4 = ",,only,one,,word,,";
	char *test5 = "       ";

	printf("Test 1 = %d mots\n", ft_countword(test1, ','));
	printf("Test 2 → %d mots\n", ft_countword(test2, ' '));
	printf("Test 3 → %d mots\n", ft_countword(test3, ','));
	printf("Test 4 → %d mots\n", ft_countword(test4, ','));
	printf("Test 5 → %d mots\n", ft_countword(test5, ' '));

	return (0);
}