
#include "libft.h"

static char	*ft_strrev(char *str)
{
	char	tmp;
	int		i;
	int		end;

	i = 0;
	end = ft_strlen(str) - 1;
	while (i < end / 2)
	{
		tmp = str[i];
		str[i] = str[end - i];
		str[end] = tmp;
		i++;
	}
	return (str);
}

static int	ft_len_of(int n)
{
	int	i;

	i = 0;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static void	ft_if_negative(int *n, unsigned int *nbr, size_t *nlen)
{
	if (*n <= 0)
	{
		*nbr = -(*n);
		(*nlen)++;
	}
}

char	*ft_itoa(int n)
{
	char			*strnum;
	size_t			i;
	size_t			len;
	unsigned int	nbr;

	i = 0;
    nbr = n;
	len = 0;
	ft_if_negative(&n, &nbr, &len);
	len = len + ft_len_of(n);
	strnum = malloc(sizeof(char) * (len + 1));
	if (!strnum)
		return (NULL);
	if (n == 0)
    {
		strnum[i] = '0';
        i++
    }
	while (nbr)
	{
		strnum[i] = (nbr % 10) + '0';
		nbr /= 10;
        i++;
	}
	if (n < 0)
    {
		snum[i] = '-';
        i++;
    }
	strnum[i] = 0;
	return (ft_strrev(strnum));
}
