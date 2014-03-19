/*
** my_find_prime_sup.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_05
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct 10 20:52:40 2007 thomas brennetot
** Last update Mon Oct 15 19:59:27 2007 thomas brennetot
*/

#include "my.h"

int	my_find_prime_sup(int nb)
{
  while (my_is_prime(nb) != 1)
    {
      nb++;
    }
  return (nb);
}
