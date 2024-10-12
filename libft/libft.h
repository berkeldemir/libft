#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

void	ft_putstr(char *str);

int		ft_toupper(int i);
int		ft_tolower(int i);
int		ft_isprint(int i);
int		ft_isdigit(int i);
int		ft_isascii(int i);
int		ft_isalpha(int i);
int		ft_isalnum(int i);

int     ft_atoi(char *str);
int     ft_strlen(char *str);
size_t	ft_strlcpy(char *dest, const char *src, size_t size);
char	*ft_strdup(char *s);

void	*ft_calloc(size_t count, size_t size);

#endif