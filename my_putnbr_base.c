/*
** my_putnbr_base.c for  in /u/epitech_2012/brenne_t/cu/rendu/lib
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Dec 28 15:27:38 2007 thomas brennetot
** Last update Fri Dec 28 15:30:32 2007 thomas brennetot
*/

#include "my.h"

int	my_putnbr_base(int n, char *base)
{
  int	deb;
  int	fin;
  int	len;

  len = my_strlen(base);
  if (n < 0)
    {
      my_putchar('-');
      my_putnbr_base(-n, base);
    }
  else
    {
      fin = n % len;
      deb = (n - fin) / len;
      if (deb != 0)
        my_putnbr_base(deb, base);
      my_putchar(base[fin]);
    }
  return (0);
}

