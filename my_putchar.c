/*
** my_putchar.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/lib
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Mon Oct 15 11:36:11 2007 thomas brennetot
** Last update Tue Dec 11 15:17:52 2007 thomas brennetot
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
  return;
}
