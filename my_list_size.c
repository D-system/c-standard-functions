/*
** my_list_size.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 18 16:15:10 2007 thomas brennetot
** Last update Thu Oct 18 17:11:20 2007 thomas brennetot
*/

#include "my.h"

int	my_list_size(t_list *begin)
{
  int	nb;

  nb = 0;
  while (begin != 0)
    {
      nb++;
      begin = begin->next;
    }
  return (nb);
}
