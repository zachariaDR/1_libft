/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:12:34 by zadriouc          #+#    #+#             */
/*   Updated: 2023/11/27 13:59:27 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*ft_handl_overlap(void *dst, const void *src, size_t len)
{
	while (len--)
		*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	if (!dst && !src)
		return (0);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_handl_overlap(dst, src, len));
	return (dst);
}
