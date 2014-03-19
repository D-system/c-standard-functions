/*
** my_params_in_list.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_11
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Oct 16 10:19:05 2007 thomas brennetot
** Last update Sat Jan  5 14:46:20 2008 thomas brennetot
*/

#include <stdlib.h>
#include "my.h"

void		my_create_linked_list(t_list **new, char *str)
{
  t_list	*tmp;

  tmp = malloc(sizeof(*tmp));
  if (tmp == NULL)
    {
      my_putstr("Update your PC, it's suck! (Malloc Error)\n");
      exit (-1);
    }
  tmp->next = *new;
  tmp->data = my_strdup(str);
  *new = tmp;
  return;
}

t_list		*my_params_in_list(int ac, char **av)
{
  int		i;
  t_list	*new;

  i = 0;
  new = 0;
  while (i != ac)
    {
      my_create_linked_list(&new, av[i]);
      i++;
    }
  return (new);
}
