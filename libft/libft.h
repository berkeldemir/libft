#ifndef LIBFT_H
#define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

void	ft_putstr(char *str);
// <ctype.h>
int		ft_toupper(int i);
int		ft_tolower(int i);
int		ft_isprint(int i);
int		ft_isdigit(int i);
int		ft_isascii(int i);
int		ft_isalpha(int i);
int		ft_isalnum(int i);
// <stdlib.h>
char	*ft_strdup(char *s);

int     ft_strlen(char *str);
int     ft_atoi(char *str);
#endif