/*
** my_is_lower.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 11 18:11:58 2007 thomas brennetot
** Last update Thu Oct 11 18:47:06 2007 thomas brennetot
*/

int	my_str_lower(char *str)
{
  int	i;

  while ((str[i] >= 'a' && str[i] <= 'z') || str[i] == '\0')
    {
      if (str[i] == '\0')
	return (1);
      i++;
    }
  return (0);
}
