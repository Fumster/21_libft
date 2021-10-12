/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 19:41:57 by fchrysta          #+#    #+#             */
/*   Updated: 2021/10/12 20:45:47 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 1;
	if (dest == src)
		return (dest);
	while (i <= n)
	{
		if (src > dest)
			((char *)dest)[i - 1] = ((char *)src)[i - 1];
		if (dest > src)
			((char *)dest)[n - i] = ((char *)src)[n - i];
		i++;
	}
	return (dest);
}
