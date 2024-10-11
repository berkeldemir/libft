char	*strnstr(const char *main, const char *sub, size_t len)
{
	int	i;

	i = 0;
	if (*sub == '\0')
		return ((char *)main);
	while (i < len && sub[i] != '\0')
	{
		//   len dediğim şey 'main'deki len uzunluğundaki ilk karakterlere bak' gibi bir anlamda mı yoksa farklı bir şey mi??
	}
	return (NULL);
}
