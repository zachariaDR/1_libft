/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zadriouc <zadriouc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 17:34:24 by zadriouc          #+#    #+#             */
/*   Updated: 2023/11/27 14:56:41 by zadriouc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_isspace(const char c)
{
	return (c == ' ' || c == '\t' || c == '\v' || c == '\r' || c == '\f'
		|| c == '\n');
}

static int	skip(const char *str, int *index)
{
	int	sgn;
	int	i;

	i = 0;
	sgn = 1;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sgn = -1;
		i++;
	}
	*index = i;
	return (sgn);
}

int	ft_atoi(const char *str)
{
	int	res;
	int	sign;
	int	i;

	res = 0;
	sign = skip(str, &i);
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = (res * 10) + (str[i] - '0');
		i++;
	}
	return (res * sign);
}
