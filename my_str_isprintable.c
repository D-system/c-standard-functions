/*
** my_str_isprintable.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 11 19:02:41 2007 thomas brennetot
** Last update Thu Oct 11 19:06:55 2007 thomas brennetot
*/

int	my_str_isprintable(char *str)
{
  int	i;

  while ((str[i] >= 32 && str[i] <= 126)  || str[i] == '\0')
    {
      if (str[i] == '\0')
	return (1);
      i++;
    }
  return (0);
}
