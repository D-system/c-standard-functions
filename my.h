/*
** my.h for  in /u/epitech_2012/brenne_t/cu/rendu/piscine/lib/my
** 
** Made by thomas brennetot
** Login   <brenne_t@epitech.net>
** 
** Started on  Mon Oct 15 19:30:41 2007 thomas brennetot
** Last update Wed Feb 20 17:40:53 2008 thomas brennetot
*/

#ifndef __MY_H__
# define __MY_H__

typedef struct	s_list
{
  char		*data;
  struct s_list	*next;
}		t_list;

union	t_union
{
  int		i;
  char		c[4];
};

char    *my_strdup(char *str);
int	my_list_size(t_list *begin);
void	my_create_linked_list(t_list **new, char *av);
t_list	*my_params_in_list(int ac, char **av);
void	my_putchar(char c);
int	my_isneg(int n);
void	my_put_nbr(int nb);
int	my_swap(int *a, int *b);
int	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
void	my_sort_int_tab(int *tab, int size);
int	my_power_rec(int nb, int power);
int	my_square_root(int nb);
int	my_is_prime(int nombre);
int	my_find_prime_sup(int nb);
char	*my_strcpy(char *dest, char *src);
char	*my_strncpy(char *dest, char *src, int n);
char	*my_revstr(char *str);  
char	*my_strstr(char *str, char *to_find);
int	my_strcmp(char *s1, char *s2);
int	my_strncmp(char *s1, char *s2, int n);
char	*my_strupcase(char *str);
char	*my_strlowcase(char *str);
char	*my_strcapitalize(char *str);
int	my_str_isalpha(char *str);
int	my_str_isnum(char *str);
int	my_str_islower(char *str);
int	my_str_isupper(char *str);
int	my_str_isprintable(char *str);
int	my_showstr(char *str);
int	my_showmem(char *str, int size);
char	*my_strcat(char *str1, char *str2);
char	*my_strncat(char *str1, char *str2, int n);
int	my_strlcat(char *str1, char *str2, int n);
int	is_bit_endian(void);
int	my_getnbr_base(char *str, char *base);
int	my_putnbr_base(int n, char *base);
char	**my_str_to_wordtab(char *str);

#endif
