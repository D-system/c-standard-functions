/*
** my_showmem.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Oct 12 16:09:36 2007 thomas brennetot
** Last update Mon Oct 15 20:13:55 2007 thomas brennetot
*/

#include "my.h"

void	my_put_nbr_base_pad(unsigned int nbr, char *base,int pad)
{
  int	base_len;

  base_len = my_strlen(base);
  if (pad > 0)
    {
      my_put_nbr_base_pad(nbr / base_len,base,pad - 1);
      my_putchar(base[nbr % base_len]);
    }
}

void	print_addr(char *str)
{
  my_put_nbr_base_pad((unsigned int)str,"0123456789abcdef", 8);
  my_putchar(':');
}

void	print_hexa(char *str,int size)
{
  int	i;

  i = 0;
  while (i < 16)
    {
      if ((i % 2) == 0)
        my_putchar(' ');
      if (i < size)
        my_put_nbr_base_pad(str[i], "0123456789abcdef", 2);
      else
        my_putstr(" ");
      i++;
    }
}

void    print_ascii(char *str,int size)
{
  int   i;

  my_putstr(" ");
  i = 0;
  while ((1 < 16) && (i < size))
    {
      if ((str[i] >= 32) && (str[i] < 127))
        my_putchar(str[i]);
      else
        my_putchar('.');
      i++;
    }
}

void	my_showmem16(char *str,int size)
{
  print_addr(str);
  print_hexa(str, size);
  print_ascii(str, size);
  my_putchar('\n');
}

int	my_showmem(char *str,int size)
{
  int	i;

  i = 0;
  while (i < size)
    {
      my_showmem16(&str[i], size - i);
      i = i + 16;
    }
  return (0);
}
