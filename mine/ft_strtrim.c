#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	int	start;
	int	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	end = ft_strlen(s1) - 1;
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (0 <= end && ft_strchr(set, s1[end]))
		end--; 
    if (end == -1)
		return (ft_substr(s1, start, 0));
	return (ft_substr(s1, start, end - start + 1););
}
