/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 17:17:02 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/03 22:57:01 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	if (!dst && dstsize == 0)
		return (ft_strlen(src));
	if (dstsize <= ft_strlen(dst))
		return (dstsize + ft_strlen(src));
	j = 0;
	i = ft_strlen(dst);
	while (src[j] && i + j < dstsize - 1)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	return (i + ft_strlen(src));
}
