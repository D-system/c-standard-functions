/*
** my_strlowcase.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Oct 12 13:37:06 2007 thomas brennetot
** Last update Fri Oct 12 14:33:04 2007 thomas brennetot
*/

char	*my_strlowcase(char *str)
{
  int	i;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'A') && (str[i] <= 'Z'))
	str[i] = str[i] - 'A' + 'a';
      i++;
    }
  return (str);
}
