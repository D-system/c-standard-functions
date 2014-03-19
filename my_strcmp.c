/*
** my_strcmp.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Oct  9 17:09:10 2007 thomas brennetot
** Last update Mon Oct 15 20:17:30 2007 thomas brennetot
*/

#include "my.h"

int	my_strcmp(char *s1, char *s2)
{
  if (my_getnbr(s1) > my_getnbr(s2))
    return (1);
  if (my_getnbr(s1) < my_getnbr(s2))
    return (-1);
  return (0);
}
