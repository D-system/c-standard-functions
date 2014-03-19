/*
** my_is_prime.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_05
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct 10 20:22:50 2007 thomas brennetot
** Last update Mon Oct 15 19:58:48 2007 thomas brennetot
*/

#include "my.h"

int	my_is_prime(int nb)
{
  int	i;

  i = 2;
  while (i <= my_square_root(nb))
    {
      if ((nb % i) == 0)
	return (0);
      i++;
    }
  return (1);
}
