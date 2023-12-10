/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:29:45 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/10 13:58:43 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*res;
	size_t	totale;

	if (size && count > SIZE_MAX / size)
		return (0);
	if (!size || !count)
		ft_calloc(1, 1);
	totale = size * count;
	res = malloc(totale);
	if (!res)
		return (0);
	ft_bzero(res, totale);
	return (res);
}
