#include <stdio.h>
#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char qwe[] = "bonjour";
	char asd[8];
	char zxc[8];
	char *source1;
	char *source2;
	char *yours;
	char *their;
	int DIFF;

	source1 = &qwe[0];
	source2 = &qwe[0];
	yours = &asd[0];
	their = &zxc[0];
	yours = ft_strncpy(yours, source1, 4);
	their = strncpy(their, source2, 4);
	DIFF = strcmp(&zxc[0], &asd[0]);
	printf("input : %s		", qwe);
	printf("your output : %s	", asd);
	printf("official output : %s	", zxc);
	printf("DIFF = %d\n", DIFF);
	return (0);
}
