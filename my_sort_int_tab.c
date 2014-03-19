/*
** my_sort_int_tab.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_04
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct 10 13:41:22 2007 thomas brennetot
** Last update Mon Oct 15 19:57:15 2007 thomas brennetot
*/

#include "my.h"

void	my_sort_int_tab(int *tab, int size)
{
  int	i;
  int	flag;

  flag = 1;
  while (flag == 1)
    {
      flag = 0;
      i = 0;
      while (i < size)
	{
	  if (tab[i] > tab[i + 1])
	    {
	      flag = 1;
	      my_swap(&tab[i], &tab[i + 1]);
	    }
	  i++;
	}
    }
  return;
}
