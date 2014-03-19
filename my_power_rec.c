/*
** my_power_rec.c for  in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Sun Oct  7 21:57:34 2007 thomas brennetot
** Last update Wed Oct 10 13:29:06 2007 thomas brennetot
*/

int	my_power_rec(int nb, int power)
{
  int   nb_st;

  nb_st = nb;
  if (power >= 0)
    {
      if (power != 0)
        {
          if (power != 1)
            {
	      nb *= my_power_rec(nb_st, (power - 1));
            }
          return (nb);
        }
      return (1);
    }
  return (0);
}
