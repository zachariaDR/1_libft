/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:29:45 by zadriouc          #+#    #+#             */
/*   Updated: 2023/11/30 13:02:22 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;

	if (size != 0 && count > SIZE_MAX / size)
		return (0);
	res = malloc(size * count);
	if (!res)
		return (0);
	ft_bzero(res, size * count);
	return (res);
}
