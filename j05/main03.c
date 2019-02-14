#include <stdio.h>
#include <string.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char	 qwe[8] = "bonjour";
	char	asd[8];
	char	zxc[8];
	char	*source1;
	char	*source2;
	char	*yours;
	char	*theirs;
	int		DIFF;	

	source1 = &qwe[0];
	source2 = &qwe[0];
	yours = &asd[0];
	theirs = &zxc[0];
	yours = ft_strcpy(yours, source1);
	theirs = strcpy(theirs, source2); 
	DIFF = strcmp(&qwe[0], &asd[0]);
	printf("input : %s		", qwe);
	printf("your output : %s	", asd);
	printf("official output : %s	", zxc);
	printf("DIFF = %d", DIFF);
	if (DIFF == 0)
	{
		printf("\nIl a pas dit bonjour ?");
	}
	return (0);
}
