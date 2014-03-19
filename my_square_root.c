/*
** my_square_root.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_05
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct 10 20:01:30 2007 thomas brennetot
** Last update Wed Oct 10 20:22:13 2007 thomas brennetot
*/

int	my_square_root(int nb)
{
  int	i;

  i = 0;
  while ((i * i) < nb)
    {
      i++;
    }
  if ((i * i) == nb)
    return (i);
  return (0);
}
