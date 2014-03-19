/*
** main.c for  in /u/epitech_2012/brenne_t/cu/rendu/test/endian
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Dec 18 18:03:15 2007 thomas brennetot
** Last update Tue Dec 25 19:23:40 2007 thomas brennetot
*/

#include "my.h"

int	is_big_endian(void)
{
  union t_union st_union;

  st_union.i = 0;
  st_union.c[0] = 1;
  if (st_union.i == 1)
    return (0);
  return (1);
}
