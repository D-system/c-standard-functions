/*
** my_strdup.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Oct 16 21:38:42 2007 thomas brennetot
** Last update Tue Dec 11 15:15:21 2007 thomas brennetot
*/

#include <stdlib.h>
#include "my.h"

char	*my_strdup(char *str)
{
  char	*addr;
  int	i;

  i = 0;
  addr = malloc((sizeof(*addr) * my_strlen(str)) + 1);
  while (str[i] != '\0')
    {
      addr[i] = str[i];
      i++;
    }
  addr[i] = '\0';
  return (addr);
}
