#include<stdio.h>
#include<bsd/string.h>
#include<unistd.h>
#include<stdlib.h>
#include"libft.h"

int main (void)
{
	const char str[30] = "  \n 2147483649\0";
//	const char str2[12] = "three\0";
	int num = 999999;
//	char *ptr;
//	char src[8] = "_wor\0ld";
//	char dst[15];
//	int s = 9;
	
//	dst[0] = 'h';
//	dst[1] = 'e';
//	dst[2] = 'l';
//	dst[3] = 'l';
//	dst[4] = 'o';
//	dst[5] = '\0';
	
	num = ft_atoi(str);
	if (num)
		printf ("%d\n", num);
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
