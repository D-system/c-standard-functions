/*
** my_strlen.c for  in /u/epitech_2012/brenne_t/rendu/piscine/1
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Fri Oct  5 15:02:32 2007 thomas brennetot
** Last update Mon Oct 15 11:34:44 2007 thomas brennetot
*/

int     my_strlen(char *str)
{
  int result;

  result = 0;
  while (str[result] != '\0')
    {
      result++;
    }
  return (result);
}
