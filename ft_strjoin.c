/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/25 13:23:14 by zadriouc          #+#    #+#             */
/*   Updated: 2023/12/05 17:05:10 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new;
	size_t	s1_len;
	size_t	s2_len;

	if (!s1 && !s2)
		return (ft_calloc(1, sizeof(char)));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	new = (char *)malloc(sizeof(char) * (s1_len + s2_len + 1));
	if (!new)
		return (NULL);
	ft_strlcpy(new, s1, s1_len + 1);
	ft_strlcat(new, s2, s1_len + s2_len + 1);
	return (new);
}
