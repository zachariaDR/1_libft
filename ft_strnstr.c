/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 18:30:41 by zadriouc          #+#    #+#             */
/*   Updated: 2023/11/29 10:46:02 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!*needle)
		return ((char *)haystack);
	while (haystack[i] && ft_strlen(needle) - 1 < len - i)
	{
		while (haystack[i + j] == needle[j] && haystack[i + j])
			j++;
		if (needle[j] == 0)
			return ((char *)haystack + i);
		i++;
		j = 0;
	}
	return (0);
}
