/*
** my_strstr.c for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Wed Oct 10 08:46:56 2007 thomas brennetot
** Last update Thu Oct 11 12:13:07 2007 thomas brennetot
*/

char	*my_strstr(char *str, char *to_find)
{
  int	i;
  int	u;
  char	*not_find = "not find";

  i = 0;
  u = 0;
  while(str[i] != '\0')
    {
      if (str[i] == to_find[u])
	{
	  while ((str[i + u] == to_find[u]) || (to_find[u] == '\0'))
	    {
	      if (to_find[u] == '\0')
		return (str + i);
	      u++;
	    }
	  u = 0;
	}
      i++;
    }
  return (not_find);
}
