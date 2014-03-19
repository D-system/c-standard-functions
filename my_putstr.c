/*
** my_putstr.c for  in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct  4 15:40:18 2007 thomas brennetot
** Last update Mon Oct 15 19:56:11 2007 thomas brennetot
*/

#include "my.h"

int	my_putstr(char *str)
{
  int i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar (str[i]);
      i++;
    }
  return (0);
}
