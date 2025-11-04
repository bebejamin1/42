/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bbeaurai <bbeaurai@student.42lehavre.fr    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/04 17:19:11 by bbeaurai          #+#    #+#             */
/*   Updated: 2025/11/04 17:20:46 by bbeaurai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*
Paramètres lst : adresse d'un pointeur vers un nœud.
f : adresse de la fonction appliquée au contenu de chaque
nœud.
del : adresse de la fonction utilisée pour supprimer le contenu d'un
nœud si nécessaire.
Valeur de retour : nouvelle liste.
NULL si l'allocation échoue.
Fonction externe malloc, free
Description Parcourt la liste « lst », applique la
fonction « f » au contenu de chaque nœud et crée
une nouvelle liste résultant des applications successives
de la fonction « f ». La fonction « del » est utilisée pour
supprimer le contenu d'un nœud si nécessaire.
*/

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	
}