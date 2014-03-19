/*
** my_put_nbr.c for  in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct  4 08:18:24 2007 thomas brennetot
** Last update Fri Dec 28 18:53:06 2007 thomas brennetot
*/

#include "my.h"

void	my_put_nbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      my_put_nbr(-nb);
    }
  else
    {
      if (nb < 10)
	my_putchar(nb + '0');
      else
	{
	  my_put_nbr(nb / 10);
	  my_putchar((nb % 10) + '0');
	}
    }
  return;
}
