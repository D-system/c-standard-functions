/*
** my_strncpy.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/Jour_06
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Tue Oct  9 12:48:01 2007 thomas brennetot
** Last update Tue Oct  9 12:50:08 2007 thomas brennetot
*/

char	*my_strncpy(char *dest, char *src, int n)
{
  int	i;

  i = 0;
  while (n--)
    {
      dest[i] = src[i];
      i++;
    }
  dest[i] = '\0';
  return (dest);
}
