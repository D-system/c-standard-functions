/*
** my_str_to_wordtab.c for  in /u/epitech_2012/brenne_t/cu/rendu/test/minishell
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Feb 19 20:08:44 2008 thomas brennetot
** Last update Wed Feb 20 17:39:17 2008 thomas brennetot
*/

#include <stdlib.h>
#include "my.h"
#define BUFFER 2048

int	my_str_to_wordtab_nb_word(char *str)
{
  int	i;
  int	space;

  i = 0;
  space = 1;
  if (str[0] != '\0')
    space++;
  while (str[i] != '\0')
    {
      if (str[i] == ' ')
	{
	  if (str[i + 1] != ' ' && str[i + 1] != '\0')
	    space++;
	}
      i++;
    }
  return (space);
}

char	**my_str_to_wordtab(char *str)
{
  char	**tab;
  char	buff[BUFFER];
  int	i;
  int	u;
  int	itab;

  i = 0;
  itab = 0;
  tab = malloc(sizeof(*tab) * my_str_to_wordtab_nb_word(str));
  while (str[i] != '\0')
    {
      u = 0;
      while (u > BUFFER)
	buff[u++] = '\0';
      u = 0;
      while (str[i] == ' ' && str[i] != '\0')
	i++;
      while (str[i] != ' ' && str[i] != '\0')
	buff[u++] = str[i++];
      tab[itab] = malloc(sizeof(**tab) * (my_strlen(buff) + 1));
      my_strcpy(tab[itab++], buff);
    }
  tab[itab] = 0;
  return (tab);
}
