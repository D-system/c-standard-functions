/*
** my_swap.c for  in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct  4 12:04:11 2007 thomas brennetot
** Last update Wed Oct 10 14:17:31 2007 thomas brennetot
*/

int	my_swap(int *a, int *b)
{
  int	third;

  third = *a;
  *a = *b;
  *b = third;
  return (0);
}
