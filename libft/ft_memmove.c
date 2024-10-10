#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t len)
{
	size_t	i;

	i = 0;
	if (s2 < s1)
	{
		i = len;
		while (--i > 0)
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
	}
	else
	{
		i = 0;
		while (i < len)
		{
			((unsigned char *)s1)[i] = ((unsigned char *)s2)[i];
			i++;
		}
	}
	return (s1);
}

// İNCELEMEDİM, PASQAL BÖYLE YAPMIŞ AMA TAM OTURMADI GİBİ??