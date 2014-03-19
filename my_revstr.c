/*
** my_revstr.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Oct  9 13:02:12 2007 thomas brennetot
** Last update Mon Oct 15 20:00:45 2007 thomas brennetot
*/

#include "my.h"

char	*my_revstr(char *stc)
{
  int	max;
  int	min;
  int	swap;

  min = 0;
  max = my_strlen(stc) - 1;
  while (min < max)
    {
      swap = stc[min];
      stc[min] = stc[max];
      stc[max] = swap;
      max--;
      min++;
    }
  return (stc);
}
