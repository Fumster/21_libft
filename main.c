#include<stdio.h>
#include<bsd/string.h>
#include<unistd.h>
#include"libft.h"

int main (void)
{
	int i = 0;
	int ret;
	char src[8] = "_wor\0ld";
	char dst[15];
	int s = 9;
	
	dst[0] = 'h';
	dst[1] = 'e';
	dst[2] = 'l';
	dst[3] = 'l';
	dst[4] = 'o';
	dst[5] = '\0';
	
	ret = strlcat(dst, src, s);
//	printf ("---original\n");
//	while (dst[i])
//		write(1, &dst[i++], 1);
	printf ("\n%d\n", ret);

//	i = 0;
	ret = ft_strlcat(dst, src, s);
	printf ("---my\n");
	while (dst[i])
		write(1, &dst[i++], 1);
	printf ("\n%d\n", ret);
}
