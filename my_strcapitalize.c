/*
** my_strcapitalize.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Oct 12 13:38:59 2007 thomas brennetot
** Last update Mon Oct 15 20:03:21 2007 thomas brennetot
*/

#include "my.h"

int	do_capit(char *str, int flag, int i)
{
  if (((str[i] >= 'a') && (str[i] <= 'z')) || \
       ((str[i] >= '0') && (str[i] <= '9')))
    {
      if (flag == 0)
	{
	  if (!((str[i] >= '0') && (str[i] <= '9')))
	      str[i] = str[i] - 'a' + 'A';
	  flag = 1;
	}
    } 
  else
    flag = 0;
  return (flag);
}

char	*my_strcapitalize(char *str)
{
  int	i;
  int	flag;

  flag = 0;
  str = my_strlowcase(str);
  if ((str[0] >= 'a') && (str[0] <= 'z'))
    {
      str[0] = str[0] - 'a' + 'A';
      flag = 1;
    }
  i = 1;
  while (str[i] != '\0')
    {
      flag = do_capit(str, flag, i);
      i++;
    }
  return (str);
}
