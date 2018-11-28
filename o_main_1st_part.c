#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>
#include <ctype.h>
#include <fcntl.h>


void	*ft_memset(void *s, int c, size_t n);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memccpy(void *dest, const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dest, const char *src);
char	*ft_strncpy(char *dest, const char *src, size_t n);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strncat(char *dest, const char *src, size_t n);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strstr(const char *haystack, const char *needle);
char	*ft_strnstr(const char *big, const char *little, size_t len);
int		ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_atoi(const char *nptr);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);

int		main(void)
{
	/**
	* I. PART I.
	* 1. FT_MEMSET
	*/

	char	str[8] = "abcdefg";
	char	str2[8] = "abcdefg";
	char	str3[8] = "zyxwvut";
	char	str4[8] = "zyxwvut";
	char	str5[8] = "1234567";
	char	str6[8] = "1234567";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMSET\x1b[0m");
	printf("Initial: %s\n", str);
	memset(str, 97, 7);
	printf("Memset return: %s\n", str);
	ft_memset(str2, 97, 7);
	printf("ft_memset return: %s\n", str2);
	if (strcmp(str, str2) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str3);
	memset(str3, 126, 3);
	printf("Memset return: %s\n", str3);
	ft_memset(str4, 126, 3);
	printf("ft_memset return: %s\n", str4);
	if (strcmp(str3, str4) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str5);
	memset(str5, 16, 3);
	printf("Memset return: %s\n", str5);
	ft_memset(str6, 16, 3);
	printf("ft_memset return: %s\n", str6);
	if (strcmp(str5, str6) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 2. FT_BZERO
	*/

	char	str7[8] = "abcdefg";
	char	str8[8] = "abcdefg";
	char	str9[8] = "zyxwvut";
	char	str10[8] = "zyxwvut";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_BZERO\x1b[0m");
	printf("Initial: %s\n", str7);
	bzero(str7, 1);
	printf("Bzero return: %s\n", str7);
	ft_bzero(str8, 1);
	printf("ft_bzero return: %s\n", str8);
	if (strcmp(str7, str8) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str9);
	bzero(str9, 7);
	printf("Bzero return: %s\n", str9);
	ft_bzero(str10, 7);
	printf("ft_bzero return: %s\n", str10);
	if (str9[0] == str10[0] && str9[1] == str10[1] && str9[2] == str10[2]
		&& str9[3] == str10[3] && str9[4] == str10[4] && str9[5] == str10[5]
		&& str9[6] == str10[6] && str9[7] == str10[7])
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 3. FT_MEMCPY
	*/

	char	str11[15] = "1234567890";
	char	str12[15] = "0987654321";
	char	str13[15] = "1234567890";
	char	str14[15] = "0987654321";
	char	str15[15] = "1234567890";
	char	str16[15] = "";
	char	str17[15] = "1234567890";
	char	str18[15] = "";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCPY\x1b[0m");
	printf("Initial: %s\n", str12);
	memcpy(str12, str11, 8);
	printf("Memcpy return: %s\n", str12);
	ft_memcpy(str14, str13, 8);
	printf("ft_memcpy return: %s\n", str14);
	if (strcmp(str12, str14) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str16);
	memcpy(str16, str15, 8);
	printf("Memcpy return: %s\n", str16);
	ft_memcpy(str18, str17, 8);
	printf("ft_memcpy return: %s\n", str18);
	if (strcmp(str16, str18) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 4. FT_MEMCCPY
	*/

	char	str21[20] = "hello, world!";
	char	str22[20] = "hellohellohellohello";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCCPY\x1b[0m");
	printf("Initial: %s\n", str21);
	ft_memccpy(str22, str21, 'o', 9);
	printf("ft_memccpy return: %s\n", str22);
	if (strcmp(str22, "hellohellohellohello") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 5. FT_MEMMOVE
	*/

	char	str23[11] = "1234567890";
	char	str24[11] = "1234567890";
	char	str25[11] = "1234567890";
	char	str26[11] = "1234567890";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMMOVE\x1b[0m");
	printf("Initial: %s\n", str23);
	memmove(&str23[3], &str23[2], 3);
	printf("Memmove return: %s\n", str23);
	ft_memmove(&str24[3], &str24[2], 3);
	printf("ft_memmove return: %s\n", str24);
	if (strcmp(str23, str24) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str25);
	memmove(&str25[2], &str25[3], 3);
	printf("Memmove return: %s\n", str25);
	ft_memmove(&str26[2], &str26[3], 3);
	printf("ft_memmove return: %s\n", str26);
	if (strcmp(str25, str26) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 6. FT_MEMCHR
	*/

	char	*str27;
	char	str28[11] = "abcdefghij";
	char	*str29;
	char	str30[11] = "abcdefghij";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCHR\x1b[0m");
	printf("Initial: %s\n", str28);
	str27 = memchr(str28, 'e', 8);
	printf("Memchr return: %s\n", str27);
	str29 = ft_memchr(str30, 'e', 8);
	printf("ft_memchr return: %s\n", str29);
	if (strcmp(str27, str29) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 7. FT_MEMCMP
	*/

	char	str31[11] = "abcdefghij";
	char	str32[11] = "abcdefghij";
	char	str33[11] = "ab45efghij";
	char	str34[11] = "abcdefghij";
	int		intg;
	int		intg2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_MEMCMP\x1b[0m");
	printf("Initial: %s\n", str31);
	printf("Initial: %s\n", str32);
	intg = memcmp(str31, str32, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str31, str32, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str31);
	printf("Initial: %s\n", str32);
	intg = memcmp(str31, str32, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str31, str32, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str33);
	printf("Initial: %s\n", str34);
	intg = memcmp(str33, str34, 8);
	printf("Memcmp return: %d\n", intg);
	intg2 = ft_memcmp(str33, str34, 8);
	printf("ft_memcmp return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 8. FT_STRLEN
	*/

	char	str35[11] = "abcdefghij";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRLEN\x1b[0m");
	printf("Initial: %s\n", str35);
	intg = strlen(str35);
	printf("Strlen return: %d\n", intg);
	intg2 = ft_strlen(str35);
	printf("ft_strlen return: %d\n", intg2);
	if (intg == intg2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 9. FT_STRDUP
	*/

	char	str36[11] = "abcdefghij";
	char	*str37;
	char	*str38;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRDUP\x1b[0m");
	printf("Initial: %s\n", str36);
	str37 = strdup(str36);
	printf("Strdup return: %s\n", str37);
	str38 = ft_strdup(str36);
	printf("ft_strdup return: %s\n", str38);
	if (strcmp(str37, str38) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 10. FT_STRCPY
	*/

	char	str39[11] = "abcdefghij";
	char	str40[11];
	char	str41[11];

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCPY\x1b[0m");
	printf("Initial: %s\n", str39);
	strcpy(str40, str39);
	printf("Strcpy return: %s\n", str40);
	ft_strcpy(str41, str39);
	printf("ft_strcpy return: %s\n", str41);
	if (strcmp(str40, str41) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 11. FT_STRNCPY
	*/

	char	str42[11] = "abcdefghij";
	char	str43[20];
	char	str44[20];

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCPY\x1b[0m");
	printf("Initial: %s\n", str42);
	strncpy(str43, str42, 15);
	printf("Strncpy return: %s\n", str43);
	ft_strncpy(str44, str42, 15);
	printf("ft_strncpy return: %s\n", str44);
	if (strcmp(str43, str44) == 0 && str43[14] == str44[14])
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 12. FT_STRCAT
	*/

	char	str45[6] = "abcd";
	char	str46[11] = "12345";
	char	str47[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCAT\x1b[0m");
	printf("Initial: %s\n", str46);
	strcat(str46, str45);
	printf("Strcat return: %s\n", str46);
	ft_strcat(str47, str45);
	printf("ft_strcat return: %s\n", str47);
	if (strcmp(str46, str47) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 13. FT_STRNCAT
	*/

	char	str48[6] = "abcd";
	char	str49[11] = "12345";
	char	str50[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCAT\x1b[0m");
	printf("Initial: %s\n", str49);
	strncat(str49, str48, 2);
	printf("Strncat return: %s\n", str49);
	ft_strncat(str50, str48, 2);
	printf("ft_strncat return: %s\n", str50);
	if (strcmp(str49, str50) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 14. FT_STRLCAT
	*/

	char	str51[6] = "abcd";
	char	str52[11] = "12345";
	char	str53[11] = "12345";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRLCAT\x1b[0m");
	printf("Initial: %s\n", str52);
	strlcat(str52, str51, 11);
	printf("Strlcat return: %s\n", str52);
	ft_strlcat(str53, str51, 11);
	printf("ft_strlcat return: %s\n", str53);
	if (strcmp(str52, str53) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 15. FT_STRCHR
	*/

	char	str54[11] = "1234567890";
	char	*str55;
	char	*str56;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCHR\x1b[0m");
	printf("Initial: %s\n", str54);
	str55 = strchr(str54, '4');
	printf("Strchr return: %s\n", str55);
	str56 = ft_strchr(str54, '4');
	printf("ft_strchr return: %s\n", str56);
	if (strcmp(str55, str56) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 16. FT_STRRCHR
	*/

	char	str57[11] = "1234567490";
	char	*str58;
	char	*str59;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRRCHR\x1b[0m");
	printf("Initial: %s\n", str57);
	str58 = strrchr(str57, '4');
	printf("Strrchr return: %s\n", str58);
	str59 = ft_strrchr(str57, '4');
	printf("ft_strrchr return: %s\n", str59);
	if (strcmp(str58, str59) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 17. FT_STRSTR
	*/

	char	str60[11] = "1234567890";
	char	str61[3] = "78";
	char	*str62;
	char	*str63;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRSTR\x1b[0m");
	printf("Initial: %s\n", str60);
	str62 = strstr(str60, str61);
	printf("Strstr return: %s\n", str62);
	str63 = ft_strstr(str60, str61);
	printf("ft_strstr return: %s\n", str63);
	if (strcmp(str62, str63) == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 18. FT_STRNSTR
	*/

	char	str64[11] = "1234567890";
	char	str65[3] = "78";
	char	*str67;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNSTR\x1b[0m");
	printf("Initial: %s\n", str64);
	str67 = ft_strnstr(str64, str65, 8);
	printf("ft_strnstr return: %s\n", str67);
	if (strcmp(str67, "7890") == 0)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 19. FT_STRCMP
	*/

	char	str68[11] = "1234567890";
	char	str69[11] = "123456ab90";
	int		intg3;
	int		intg4;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRCMP\x1b[0m");
	printf("Initial: %s\n", str68);
	printf("Initial: %s\n", str68);
	intg3 = strcmp(str68, str68);
	printf("Strcmp return: %d\n", intg3);
	intg4 = ft_strcmp(str68, str68);
	printf("ft_strcmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str68);
	printf("Initial: %s\n", str69);
	intg3 = strcmp(str68, str69);
	printf("Strcmp return: %d\n", intg3);
	intg4 = ft_strcmp(str68, str69);
	printf("ft_strcmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 20. FT_STRNCMP
	*/

	char	str70[11] = "1234567890";
	char	str71[11] = "123456ab90";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_STRNCMP\x1b[0m");
	printf("Initial: %s\n", str70);
	printf("Initial: %s\n", str71);
	intg3 = strncmp(str70, str71, 10);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(str70, str71, 10);
	printf("ft_strncmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str70);
	printf("Initial: %s\n", str71);
	intg3 = strncmp(str70, str71, 3);
	printf("Strncmp return: %d\n", intg3);
	intg4 = ft_strncmp(str71, str71, 3);
	printf("ft_strncmp return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 21. FT_ATOI
	*/

	char	str72[] = "-2147483648";
	char	str73[] = " 2147483647";
	char	str74[] = "         56";
	char	str75[] = "        -56";
	char	str76[] = "        +56";
	char	str77[] = "       +-56";
	char	str78[] = "      abc56";

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ATOI\x1b[0m");
	printf("Initial: %s\n", str72);
	intg3 = atoi(str72);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str72);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str73);
	intg3 = atoi(str73);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str73);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str74);
	intg3 = atoi(str74);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str74);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str75);
	intg3 = atoi(str75);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str75);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str76);
	intg3 = atoi(str76);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str76);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str77);
	intg3 = atoi(str77);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str77);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %s\n", str78);
	intg3 = atoi(str78);
	printf("Atoi return: %d\n", intg3);
	intg4 = ft_atoi(str78);
	printf("ft_atoi return: %d\n", intg4);
	if (intg3 == intg4)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 22. FT_ISALPHA
	*/

	int		intg5;
	int		intg6;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISALPHA\x1b[0m");
	printf("Initial: %c\n", 118);
	intg5 = isalpha(118);
	printf("Isalpha return: %d\n", intg5);
	intg6 = ft_isalpha(118);
	printf("ft_isalpha return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isalpha(32);
	printf("Isalpha return: %d\n", intg5);
	intg6 = ft_isalpha(32);
	printf("ft_isalpha return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 23. FT_ISDIGIT
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISDIGIT\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isdigit(51);
	printf("Isdigit return: %d\n", intg5);
	intg6 = ft_isdigit(51);
	printf("ft_isdigit return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isdigit(32);
	printf("Isdigit return: %d\n", intg5);
	intg6 = ft_isalpha(32);
	printf("ft_isdigit return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 24. FT_ISALNUM
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISALNUM\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isalnum(51);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(51);
	printf("ft_isalnum return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isalnum(32);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(32);
	printf("ft_isalnum return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isalnum(118);
	printf("Isalnum return: %d\n", intg5);
	intg6 = ft_isalnum(118);
	printf("ft_isalnum return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 25. FT_ISASCII
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISASCII\x1b[0m");
	printf("Initial: %c\n", 51);
	intg5 = isascii(51);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(51);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isascii(32);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(32);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isascii(118);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(118);
	printf("ft_isascii return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 571);
	intg5 = isascii(571);
	printf("Isascii return: %d\n", intg5);
	intg6 = ft_isascii(571);
	printf("ft_isascii return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 26. FT_ISPRINT
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_ISPRINT\x1b[0m");
	printf("Initial: %c\n", 0);
	intg5 = isprint(0);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(0);
	printf("ft_isprint return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	intg5 = isprint(32);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(32);
	printf("ft_isprint return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 118);
	intg5 = isprint(118);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(118);
	printf("ft_isprint return: %d\n", intg6);
	if (intg5 && intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 127);
	intg5 = isprint(127);
	printf("Isprint return: %d\n", intg5);
	intg6 = ft_isprint(127);
	printf("ft_isprint return: %d\n", intg6);
	if (!intg5 && !intg6)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 27. FT_TOUPPER
	*/
	char ch;
	char ch2;

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_TOUPPER\x1b[0m");
	printf("Initial: %c\n", 118);
	ch = toupper(118);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(118);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	ch = toupper(32);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(32);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 86);
	ch = toupper(86);
	printf("toupper return: %c\n", ch);
	ch2 = ft_toupper(86);
	printf("ft_toupper return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	/**
	* 28. FT_TOLOWER
	*/

	printf("*———————————————————————————————————————————————————————*\n%s\n", "\x1b[94mFT_TOLOWER\x1b[0m");
	printf("Initial: %c\n", 118);
	ch = tolower(118);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(118);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 32);
	ch = tolower(32);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(32);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}
	printf("Initial: %c\n", 86);
	ch = tolower(86);
	printf("tolower return: %c\n", ch);
	ch2 = ft_tolower(86);
	printf("ft_tolower return: %c\n", ch2);
	if (ch == ch2)
	{
		printf("Result: %s\n", "\x1b[32mOK\x1b[0m");
	}
	else
	{
		printf("Result: %s\n", "\x1b[31mFAIL\x1b[0m");
	}

	return (0);
}

