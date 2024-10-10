#include <stdlib.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char	*p;
	
	p = (char *)b;
	while (len > 0)
	{
		p[len - 1] = c;
		len--;
	}
	return (b); // it gotta return someth, bc the return value type isn't void, it is void*, it should return a pointer to somewhere in mem. 
}
