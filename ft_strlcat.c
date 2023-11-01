size_t	strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;
	
	i = 0;
	j = 0;
	while (dst[i] && i < size)
		i++;
	tmp = i;
	while (src[j] && (tmp + j + 1) < size)
	{
		dst[i + j] = src[j];
		i++;
		j++;
	}
	if (i < size)
		dst[i + j] = 0;
	return x:
