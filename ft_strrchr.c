#include"libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	size_t	len;

	len = ft_strlen(str) + 1;
	while ((len) > 0)
	{
		if (str[len - 1] == ch)
			return ((char *)&str[len - 1]);
		len--;
	}
	return (0);
}
