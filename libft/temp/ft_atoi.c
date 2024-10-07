int	ft_ifblank(char ch)
{
	if (ch == ' ' || ch == '\t' || ch == '\n' || ch == '\v' || ch == '\f' || ch == '\r')
		return (1);
	return (0);
}

int	ft_isnum(char ch)
{
	if (ch <= '9' && ch >= '0')
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int	isminus;
	int	result;

	result = 0;
	isminus = 1;	
	while (ft_ifblank(*str) == 1)
		str++;

	if (*str == '+' || *str == '-')
	{
		if (*str == '-')
			isminus *= -1;
		str++;	
	}
	while (ft_isnum(*str) == 1)
	{
		result *= 10;
		result += *str - '0';
		str++;
	}
	return (isminus * result);
}
