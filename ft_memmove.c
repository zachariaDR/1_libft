/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 13:12:34 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/03 20:45:07 by zadriouc         ###   ########.fr       */
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
	if (src == dst)
		return (dst);
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	if (dst > src)
		return (ft_handl_overlap(dst, src, len));
	return (dst);
}
