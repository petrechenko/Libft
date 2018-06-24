/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: apetrech <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 15:32:38 by apetrech          #+#    #+#             */
/*   Updated: 2018/06/23 14:16:27 by apetrech         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (size <= 0)
		return (NULL);
	str = malloc(size);
	if (str == NULL)
		return (NULL);
	else
		return (ft_memset(str, 0, size));
}
