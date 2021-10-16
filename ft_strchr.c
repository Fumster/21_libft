

char	*ft_strchr(const char *str, int ch)
{
	while (*str)
	{
		if (*str == ch)
			return ((char *)str);
		str++;
	}
	if (*str == ch)
		return ((char *)str);;
	return (0);
}
