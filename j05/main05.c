#include <stdio.h>
#include <string.h>

char *ft_strstr(char *str, char *to_find);

int main()
{
	char *str;
	str = "bbbcf";
	char *str2;
	str2 = "bbbcf";
	char *to_find;
	to_find = "bbcf";
	printf("ft_strstr = %s\n", ft_strstr(str, to_find));
	printf("rr_strstr = %s\n\n", strstr(str2, to_find));

	char *str3;
	str3 = "aaaaabcde";
	char *str4;
	str4 = "aaaaabcde";
	char *to_find2;
	to_find2 = "45";
	printf("ft_strstr = %s\n", ft_strstr(str3, to_find2));
	printf("rr_strstr = %s\n\n", strstr(str4, to_find2));

	char *str5;
	str5 = "aaaaabcde";
	char *str6;
	str6 = "aaaaabcde";
	char *to_find3;
	to_find3 = "";
	printf("ft_strstr = %s\n", ft_strstr(str5, to_find3));
	printf("rr_strstr = %s\n\n", strstr(str6, to_find3));

	char *str7;
	str7 = "";
	char *str8;
	str8 = "";
	char *to_find4;
	to_find4 = "45";
	printf("ft_strstr = %s\n", ft_strstr(str7, to_find4));
	printf("rr_strstr = %s\n\n", strstr(str8, to_find4));

	char *str9;
	str9 = "abdtsbaauaaabcd";
	char *str10;
	str10 = "abdtsbaauaaabcd";
	char *to_find5;
	to_find5 = "abcd";
	printf("ft_strstr = %s\n", ft_strstr(str9, to_find5));
	printf("rr_strstr = %s\n\n", strstr(str10, to_find5));

	char *str11;
	str11 = "";
	char *str12;
	str12 = "";
	char *to_find6;
	to_find6 = "";
	printf("ft_strstr = %s\n", ft_strstr(str11, to_find6));
	printf("rr_strstr = %s\n\n", strstr(str12, to_find6));
}
