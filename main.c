#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdlib.h>
#include"libft.h"

int main (void)
{
	const char str[30] = "one_two\0";
	const char str2[12] = "two";
//	int num = 999999;
	char *ptr;
//	char src[8] = "_wor\0ld";
//	char dst[15];
//	int s = 9;
	
//	dst[0] = 'h';
//	dst[1] = 'e';
//	dst[2] = 'l';
//	dst[3] = 'l';
//	dst[4] = 'o';
//	dst[5] = '\0';
	
	ptr = strnstr(str, str2, 0);
	if (ptr)
		printf ("%s\n", ptr);
	else
		printf ("null pointer");
//	while (dst[i])
//		write(1, &dst[i++], 1);
//	printf ("\n%d\n", ret);
//
//	i = 0;
//	ret = ft_strlcat(dst, src, s);
//	printf ("---my\n");
//	while (*ptr)
//	{
//		write(1, ptr, 1);
//		ptr++;
//	}
//	printf ("\n%d\n", ret);
}
