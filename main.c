#include<stdio.h>
#include<string.h>
#include"libft.h"

int main (void)
{
	int ret;
	char src[6] = "wor\0ld";
	char dst[50];
	
	dst[0] = 'h';
	dst[1] = 'e';
	dst[2] = 'l';
	dst[3] = 'l';
	dst[4] = '\0';
	
	ret = strlcat(dst, src, 10);
	printf ("%s ---original\n", dst);
	printf ("%d\n", ret);
	ret = ft_strlcat(dst, src, 10);
	printf ("%s ---my\n", dst);
	printf ("%d\n", ret);
}
