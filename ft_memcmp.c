#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;

	if (!n)
		return (0);
	i = 0;
	while ((((char *)s1)[i]) == (((char *)s2)[i]) && (n > (i + 1))) 
		i++;	
	return (((char *)s1)[i] - ((char *)s2)[i]);
}
