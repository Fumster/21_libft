#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i_b;
	size_t	i_l;	

	i_b = 0;
	i_l = 0;
	if (!little[0])
		return ((char *)big);
	while (big[i_b] && i_b < len)
	{
		if (big[i_b] == little[i_l])
			i_l++;
		i_b++;
		if (!little[i_l])
			return ((char *)&big[i_b - i_l]);
		if (big[i_b] != little[i_l])
			i_l = 0;
	}
	return (0);
}
