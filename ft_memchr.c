#include"libft.h"

void	*ft_memchr(const void *arr, int c, size_t n)
{
	while (n > 0)
	{
		if (*(unsigned char *)arr == c)
			return ((void *)arr);
		arr++;
		n--;
	}
	return (0);
}
