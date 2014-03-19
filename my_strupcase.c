/*
** my_strupcase.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 11 16:16:14 2007 thomas brennetot
** Last update Fri Oct 12 13:35:46 2007 thomas brennetot
*/

char	*my_strupcase(char *str)
{
  int	i;
  while (str[i] != '\0')
    {
      if ((str[i] >= 'a') && (str[i] <= 'z'))
	str[i] = str[i] - 'a' + 'A';
      i++;
    }
  return (str);
}
