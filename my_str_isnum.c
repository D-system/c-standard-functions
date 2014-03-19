/*
** my_str_isnum.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 11 17:57:42 2007 thomas brennetot
** Last update Thu Oct 11 18:02:02 2007 thomas brennetot
*/

int	my_str_isalpha(char *str)
{
  int	i;

  while ((str[i] >= '0' && str[i] <= '9')  || str[i] == '\0')
    {
      if (str[i] == '\0')
	return (1);
      i++;
    }
  return (0);
}
