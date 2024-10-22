#include "libft.h"
#include "fcntl.h"

// int	ft_count_words(char const *s)
// {
// 	int	count;

// 	count = 1;
// 	while (*s)
// 	{
// 		if (*s == ' ')
// 			count++;
// 		s++;
// 	}
// 	return (1 + (count / 2));
// }
// #include <stdio.h>

// int main(void)
// {
// 	char a1[] = "umut 12, senem 20, fatih 30, ahmet 12";
// 	char a2[] = "ahmet 20 furkan 19 senem 20 yeliz 10";
// 	int 	i = 0;
// 	int		j;
// 	char	**names;
// 	char	**ages;

// 	int file1 = open("file1", O_CREAT | O_RDWR | O_APPEND, 0777);

// 	names = (char **)malloc(sizeof(char *) * (ft_count_words(a1) + ft_count_words(a2)));
// 	ages = (char **)malloc(sizeof(char *) * (ft_count_words(a1) + ft_count_words(a2)));
// 	if (!names || !ages)
// 		return (0);
// 	int n = 0;
// 	while (a1[i])
// 	{
// 		names[n] = ft_substr(&a1[i], 0, (ft_strchr(&a1[i], ' ') - &a1[i]));
// 		if (!names[n])
// 			return (0);
// 		while (a1[i] && ft_isalpha(a1[i]))
// 		{
// 			i++;
// 		}
// 		i++;
// 		ages[n] = ft_substr(&a1[i], 0, (size_t)(ft_strchr(&a1[i], ',') - &a1[i]));
// 		if (!ages[n])
// 			return (0);
// 		while (a1[i] && !ft_isalpha(a1[i]))
// 			i++;
// 		n++;
// 	}
// 	char	*temp_name;
// 	char	*temp_age;
// 	int		temp_name_len;
// 	int		temp_age_len;
// 	while (a2[i])
// 	{
// 		temp_name_len = (ft_strchr(&a2[i], ' ') - &a2[i]);
// 		temp_name = ft_substr(&a2[i], 0, temp_name_len);
// 		if (!names[n])
// 			return (0);
// 		while (a2[i] && ft_isalpha(a2[i]))
// 		{
// 			i++;
// 		}
// 		i++;
// 		temp_age_len = (size_t)(ft_strchr(&a2[i], ' ') - &a2[i]);
// 		temp_age = ft_substr(&a2[i], 0, temp_age_len);
// 		if (!ages[n])
// 			return (0);
// 		for (int k = 0; k < n; k++)
// 		{
// 			if (ft_strncmp(names[k], temp_name, ft_strlen(names[k]))
// 				&& ft_strncmp(ages[k], temp_age, ft_strlen(ages[k])))
// 				;
// 			else
// 			{
// 				if (names[k + 1] == NULL)
// 				{
// 					names[n] = ft_strdup(temp_name);
// 					ages[n] = ft_strdup(temp_age);
// 					if (!names[n] || !ages[n])
// 						return (0);
// 				}
// 			}
// 		}
// 		while (a2[i] && !ft_isalpha(a2[i]))
// 			i++;
// 		n++;
// 	}
// 	int m = 0;
// 	while (m < (ft_count_words(a1) - 1))
// 	{
// 		ft_putstr_fd(names[m], file1);
// 		ft_putstr_fd(" yaşı ", file1);
// 		ft_putendl_fd(ages[m], file1);
// 		m++;
// 	}
// 	m = 0;
// 	while (m < (ft_count_words(a2) - 1))
// 	{
// 		ft_putstr_fd(names[m], file1);
// 		ft_putstr_fd(" yaşı ", file1);
// 		ft_putendl_fd(ages[m], file1);
// 		m++;
// 	}
// 	close(file1);
// }


// // "umut 12, senem 20, fatih 30, ahmet 12"
// // "ahmet 20 furkan 19 senem 20 yeliz 10"

#include <stdio.h>

void	ft_print_nodes(t_list *lst)
{
	t_list *a;

	a = lst;
	printf("%s\n", lst->content);
	while (a->next != NULL)
		a = a->next;
}

void	*ft_funct(void *content)
{
	content = (char *)content;
	return (content - 32);
}

int main(void)
{
	t_list **lst;
	ft_lstadd_back(lst, ft_lstnew("berk"));
	ft_lstadd_back(lst, ft_lstnew("mert"));
	ft_lstadd_back(lst, ft_lstnew("kaan"));

	// FIRST PRINT
	ft_print_nodes(*lst);
	printf("\n");
	t_list *lstnew = ft_lstmap(*lst, ft_funct, free);
	ft_print_nodes(lstnew);
	printf("\n");
}