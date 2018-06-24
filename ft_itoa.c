/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:50:29 by apetrech          #+#    #+#             */
/*   Updated: 2018/06/23 15:14:51 by apetrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countchars(int n)
{
	int i;
	int j;

	j = n;
	i = 0;
	if (n == 0)
		i++;
	else if (n < 0)
	{
		i++;
		j = -n;
	}
	while (j > 0)
	{
		i++;
		j = j / 10;
	}
	return (i);
}

char		*ft_itoa(int n)
{
	int				i;
	unsigned int	j;
	char			*new;

	new = (char *)malloc(sizeof(char) * ft_countchars(n) + 1);
	if (!new)
		return (NULL);
	ft_bzero(new, ft_countchars(n) + 1);
	j = n;
	if (n < 0)
		j = -n;
	i = 0;
	if (j == 0)
		new[i++] = '0';
	while (j > 0)
	{
		new[i++] = j % 10 + '0';
		j = j / 10;
	}
	if (n < 0)
		new[i++] = '-';
	new[i] = '\0';
	ft_strrev(new);
	return (new);
}
