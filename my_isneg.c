/*
** my_isneg.c for  my_isneg.c in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct  3 17:24:54 2007 thomas brennetot
** Last update Mon Oct 15 19:53:58 2007 thomas brennetot
*/

#include "my.h"

int	my_isneg(int n)
{
  if ( n < 0 )
    {
      my_putchar('N');
    }
  else
    {
      my_putchar('P');
    }
  return (0);
}
