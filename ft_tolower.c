int	ft_tolower(int	c)
{
	if (!('A' <= c && c <= 'Z'))
		return (0);
	else
		return (c + 32);
}
