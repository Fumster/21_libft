/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fchrysta <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/19 22:26:46 by fchrysta          #+#    #+#             */
/*   Updated: 2021/10/19 23:50:24 by fchrysta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

size_t static	ft_find_start(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (set[i])
	{
		if (set[i] == str[j] && str[j])
		{
			j++;
			i = 0;
			continue;
		}
		i++;
	}
	return (j);
}
size_t static	ft_find_end(char const *str, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
			printf("string in end %s", str);
	while (str[j])
	{
		while (set[i] != str[j] && set[i])
		{
			i++;
			j++;
		}
		if (set[i] == str[j])
			printf("error");
			return (j);
		j++;
		i = 0;
	}
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1)
		return (ft_strdup(""));
	if (!set)
		return (ft_strdup(s1));
	start = ft_find_start(s1, set);
	end = ft_find_end(&s1[start], set);
	printf ("end- %zu \n", end);
	return (ft_substr(s1, start, (end - start)));

}
