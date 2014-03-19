/*
** my_strncmp_2.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Thu Oct 11 22:25:09 2007 thomas brennetot
** Last update Fri Oct 12 11:46:32 2007 thomas brennetot
*/

int	my_strncmp(char *s1, char *s2, int n)
{
  int i;

  i = 0;
  while ((s1[i] != '\0') && (i < n))
    {
      if (s1[i] != s2[i])
	{
	  if (s1[i] > s2[i])
	    return (1);
	  else
	    return (-1);
	}
      i++;
    }
  return (0);
}
