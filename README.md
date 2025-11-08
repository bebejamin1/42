<img width="448" height="142" alt="ascii-art-text" src="https://github.com/user-attachments/assets/6ccb622c-ed00-4f65-bd91-b0af7b6e72cc" />

---

# Partie 1 (Fonctions Libc) : 23 fonctions
le debut des emmerdes ...

```
| `ft_isalpha` | Vérifie si le caractère est une lettre de l'alphabet
| `ft_isdigit` | Vérifie si le caractère est un chiffre (0-9)
| `ft_isalnum` | Vérifie si le caractère est alphanumérique (lettre ou chiffre)
| `ft_isascii` | Vérifie si le caractère fait partie de la table ASCII (0-127)
| `ft_isprint` | Vérifie si le caractère est imprimable
| `ft_strlen` | Calcule la longueur d'une chaîne |
| `ft_memset` | Remplit une zone mémoire avec un octet donné |
| `ft_bzero` | Met à zéro les octets d'une zone mémoire |
| `ft_memcpy` | Copie une zone mémoire dans une autre (sans chevauchement) |
| `ft_memmove` | Copie une zone mémoire dans une autre (gère le chevauchement) |
| `ft_strlcpy` | Copie une chaîne dans une autre avec protection de taille |
| `ft_strlcat` | Concatène deux chaînes avec protection de taille |
| `ft_toupper` | Convertit une lettre majuscule en minuscule
| `ft_tolower` | Convertit une lettre majuscule en minuscule
| `ft_strchr` | Trouve la première occurrence d'un caractère dans une chaîne |
| `ft_strrchr` | Trouve la dernière occurrence d'un caractère dans une chaîne |
| `ft_strncmp` | Compare les `n` premiers octets de deux chaînes |
| `ft_memchr` | Recherche un octet dans une zone mémoire |
| `ft_memcmp` | Compare deux zones de mémoire |
| `ft_strnstr` | Trouve une sous-chaîne dans une chaîne sur `n` octets |
| `ft_atoi` | Convertit une chaîne de chiffres en entier (`int`) |
| `ft_strdup` | Duplique une chaîne en allouant de la mémoire |
| `ft_calloc` | Alloue de la mémoire pour un tableau et l'initialise à zéro |
```

---

# Partie 2 (Fonctions additionnelles) : 11 fonctions.
Encore <<<

```
| `ft_substr` | Extrait une sous-chaîne d'une chaîne |
| `ft_strjoin` | Concatène deux chaînes pour en créer une nouvelle |
| `ft_strtrim` | Supprime les caractères d'un "set" au début et à la fin d'une chaîne |
| `ft_split` | Découpe une chaîne en un tableau de sous-chaînes basé sur un délimiteur |
| `ft_itoa` | Convertit un entier (`int`) en une nouvelle chaîne de caractères |
| `ft_strmapi` | Applique une fonction à chaque caractère d'une chaîne pour en créer une nouvelle |
| `ft_striteri` | Applique une fonction à chaque caractère d'une chaîne (modification sur place) |
| `ft_putchar_fd` | Écrit un seul caractère sur un file descriptor |
| `ft_putstr_fd` | Écrit une chaîne de caractères sur un file descriptor |
| `ft_putendl_fd` | Écrit une chaîne, suivie d'un saut de ligne, sur un file descriptor |
| `ft_putnbr_fd` | Écrit un nombre entier sur un file descriptor |
```

---

# Partie Bonus : 9 fonctions.
Enfin ^^

```
| `ft_lstnew` | Crée un nouveau nœud (maillon) de liste en allouant de la mémoire. |
| `ft_lstadd_front` | Ajoute un nœud au début de la liste. |
| `ft_lstsize` | Compte le nombre de nœuds dans la liste. |
| `ft_lstlast` | Renvoie le dernier nœud de la liste. |
| `ft_lstadd_back` | Ajoute un nœud à la fin de la liste. |
| `ft_lstdelone` | Libère la mémoire d'un seul nœud en utilisant la fonction `del` fournie. |
| `ft_lstclear` | Supprime et libère toute la liste (chaque nœud et son contenu). |
| `ft_lstiter` | Applique une fonction (`f`) au contenu de chaque nœud. |
| `ft_lstmap` | Crée une nouvelle liste en appliquant une fonction (`f`) à chaque nœud de l'ancienne. |
```

---

- [x] KO 1 - CALLOC DE MERDE
initial_errors:  | test_ft_isalpha: OK | test_ft_isdigit: OK | test_ft_isalnum: OK | test_ft_isascii: OK |
test_ft_isprint: OK | test_ft_strlen: OK | test_ft_memset: OK | test_ft_bzero: OK | test_ft_memcpy: OK |
test_ft_memmove: OK | test_ft_strlcpy: OK | test_ft_strlcat: OK | test_ft_toupper: OK | test_ft_tolower: OK |
test_ft_strchr: OK | test_ft_strrchr: OK | test_ft_strncmp: OK | test_ft_memchr: OK | test_ft_memcmp: OK |
test_ft_strnstr: OK | test_ft_atoi: OK | test_ft_calloc: Error encountered while testing | test_ft_strdup: OK |
test_ft_substr: OK | test_ft_strjoin: OK | test_ft_strtrim: OK | test_ft_split: OK | test_ft_itoa: OK | test_ft_strmapi: OK |
test_ft_striteri: OK | test_ft_putchar_fd: OK | test_ft_putstr_fd: OK | test_ft_putendl_fd: OK | test_ft_putnbr_fd: OK |
bonus: 9/9 functions correct

- [x] KO 2 - MAKEFILE DE MERDE !!!!!
- [ ] Inch’Allah ca passe !!!@!@#!#@!$%!^&$^$@%!#^&@^@%!

<img width="10,2" height="12,8" alt="ascii-art-text (1)" src="https://github.com/user-attachments/assets/22d851b3-044c-4811-ad51-0228343640e6" />
