/*
** my_getnbr.c for  in /u/epitech_2012/brenne_t/cu/rendu/lib
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Dec 28 15:41:28 2007 thomas brennetot
** Last update Fri Dec 28 15:41:31 2007 thomas brennetot
*/

#include "my.h"

int	get_int(char *str, int signe)
{
  int	ret;
  char	c;
  int	bp_neg;

  ret = 0;
  c = *str;
  bp_neg = -2147483647;
  while (c >= '0' && c <= '9')
    {
      ret *= 10;
      ret -= (c - '0');
      if (ret > 0)
        return (0);
      c = *(++str);
    }
  if (signe > 0)
    return ((ret >= bp_neg) ? (-1 * ret) : (0));
  return (ret);
}

int	my_getnbr(char *str)
{
  int	s;
  char	c;

  s = 1;
  c = *str;
  while (c == '+' || c == '-')
    {
      s *= ((c == '-') ? (-1) : (1));
      c = *(++str);
    }
  if (c >= '0' || c <= '9')
    return (get_int(str, s));
  return (0);
}
