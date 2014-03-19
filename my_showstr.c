/*
** my_showstr.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Oct 12 15:55:15 2007 thomas brennetot
** Last update Mon Oct 15 20:18:59 2007 thomas brennetot
*/

#include "my.h"

int	my_putnbr_base_2(int n, char *base)
{
  int	len;

  len = my_strlen(base);
  if (n < 0)
    {
      my_putchar('-');
      my_putnbr_base_2(-n, base);
    }
  else
    {
      if (n < len)
	my_putchar(n + '0');
      else
	{
	  my_putnbr_base_2(n / len, base);
	  my_putchar(base[n % len]);
	}
    }
  return (0);
}

int	my_showstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      if ((str[i] >= 32) && (str[i] < 127))
	my_putchar(str[i]);
      else
	{
	  my_putchar('\\');
	  my_putnbr_base_2(str[i], "0123467");
	}
      i++;
    }
  return (0);
}
