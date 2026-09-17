#include <assert.h>
#include <stdio.h>
#include <string.h>

int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
char *ft_strcapitalize(char *str);
int ft_strlen(char *str);
void ft_putstr(char *str);
void ft_putstr_non_printable(char *str);

void	test_ex0(int (*tex0)(char*))
{
	char *str1 = "ThisShouldWork";
	char *str2 = "This Should Not Work";
	char *str3 = "This*^#Should@!Also=-Not';Work";
	char *str4 = "";

	printf("Our string is: %s\n", str1);
	printf("%i\n", tex0(str1));
	assert(tex0(str1) == 1);

	printf("Our string is: %s\n", str2);
	printf("%i\n", tex0(str2));
	assert(tex0(str2) == 0);

	printf("Our string is: %s\n", str3);
	printf("%i\n", tex0(str3));
	assert(tex0(str3) == 0);

	printf("Our string is: %s\n", str4);
	printf("%i\n", tex0(str4));
	assert(tex0(str4) == 1);

	printf("Tests Ex0 Passed!\n\n");
}

void	test_ex1(int (*tex1)(char*))
{
	char *str1 = "8392048757299";
	char *str2 = "This738 Should4993 Not18329903 Work";
	char *str3 = "38893*^#3883@!38889344';83883";
	char *str4 = "";

	printf("Our string is: %s\n", str1);
	printf("%i\n", tex1(str1));
	assert(tex1(str1) == 1);

	printf("Our string is: %s\n", str2);
	printf("%i\n", tex1(str2));
	assert(tex1(str2) == 0);

	printf("Our string is: %s\n", str3);
	printf("%i\n", tex1(str3));
	assert(tex1(str3) == 0);

	printf("Our string is: %s\n", str4);
	printf("%i\n", tex1(str4));
	assert(tex1(str4) == 1);

	printf("Tests Ex1 Passed!\n\n");
}

void	test_ex2(int (*tex2)(char*))
{
	char *str1 = "thisshouldwork";
	char *str2 = "thishouldnotworK";
	char *str3 = "also*^this@!notwork";
	char *str4 = "Samethisnotwork";
	char *str5 = "";

	printf("Our string is: %s\n", str1);
	printf("%i\n", tex2(str1));
	assert(tex2(str1) == 1);

	printf("Our string is: %s\n", str2);
	printf("%i\n", tex2(str2));
	assert(tex2(str2) == 0);

	printf("Our string is: %s\n", str3);
	printf("%i\n", tex2(str3));
	assert(tex2(str3) == 0);

	printf("Our string is: %s\n", str4);
	printf("%i\n", tex2(str4));
	assert(tex2(str4) == 0);

	printf("Our string is: %s\n", str5);
	printf("%i\n", tex2(str5));
	assert(tex2(str5) == 1);

	printf("Tests ex2 Passed!\n\n");
}

void	test_ex3(int (*tex3)(char*))
{
	char *str1 = "THISSHOULDWORK";
	char *str2 = "THISSHOULDNOTWORk";
	char *str3 = "ALSO*^THIS@!NOTWORK";
	char *str4 = "sAMENOTWORK";
	char *str5 = "";

	printf("Our string is: %s\n", str1);
	printf("%i\n", tex3(str1));
	assert(tex3(str1) == 1);

	printf("Our string is: %s\n", str2);
	printf("%i\n", tex3(str2));
	assert(tex3(str2) == 0);

	printf("Our string is: %s\n", str3);
	printf("%i\n", tex3(str3));
	assert(tex3(str3) == 0);

	printf("Our string is: %s\n", str4);
	printf("%i\n", tex3(str4));
	assert(tex3(str4) == 0);

	printf("Our string is: %s\n", str5);
	printf("%i\n", tex3(str5));
	assert(tex3(str5) == 1);

	printf("Tests ex3 Passed!\n\n");
}

void	test_ex4(int (*tex4)(char*))
{
	char *str1 = "THISSHOULDWORK";
	char *str2 = "thisshouldalsowork";
	char *str3 = "*^THIS@!alsoWORK!!!!";
	char *str4 = "ça ne doit pas être possible à imprimer! (mais la consigne est incorrecte donc ça le feras)";
	char str5[1];
	char *str6 = "";
	char LF = 10;
	str5[0] = LF;

	printf("Our string is: %s\n", str1);
	printf("%i\n", tex4(str1));
	assert(tex4(str1) == 1);

	printf("Our string is: %s\n", str2);
	printf("%i\n", tex4(str2));
	assert(tex4(str2) == 1);

	printf("Our string is: %s\n", str3);
	printf("%i\n", tex4(str3));
	assert(tex4(str3) == 1);

	printf("Our string is: %s\n", str4);
	printf("%i\n", tex4(str4));
	assert(tex4(str4) == 0);

	printf("Our string is: %s\n", str5);
	printf("%i\n", tex4(str5));
	assert(tex4(str5) == 0);

	printf("Our string is: %s\n", str6);
	printf("%i\n", tex4(str6));
	assert(tex4(str6) == 1);

	printf("Tests ex4 Passed!\n\n");
}

void	test_ex5(char* (*tex5)(char*))
{
	char str1[]= "ThisshouldworK";
	char str2[] = "thisshouldalso**$(#Work";
	char str3[] = "";
	char strup1[] = "THISSHOULDWORK";
	char strup2[] = "THISSHOULDALSO**$(#WORK";
	char strup3[] = "";


	printf("Our initial string is: %s\n", str1);
	printf("Our uppercase string is: %s\n", tex5(str1));
	assert(strcmp(tex5(str1), strup1) == 0);

	printf("Our initial string is: %s\n", str2);
	printf("Our uppercase string is: %s\n", tex5(str2));
	assert(strcmp(tex5(str2), strup2) == 0);

	printf("Our initial string is: %s\n", str3);
	printf("Our uppercase string is: %s\n", tex5(str3));
	assert(strcmp(tex5(str3), strup3) == 0);

	printf("Tests ex5 Passed!\n\n");
}

void	test_ex6(char* (*tex6)(char*))
{
	char str1[]= "tHISSHOUlDWORk";
	char str2[] = "THISSHOULDALSO**$(#wORK";
	char str3[] = "";
	char strlow1[] = "thisshouldwork";
	char strlow2[] = "thisshouldalso**$(#work";
	char strlow3[] = "";

	printf("Our initial string is: %s\n", str1);
	printf("Our lowercase string is: %s\n", tex6(str1));
	assert(strcmp(tex6(str1), strlow1) == 0);

	printf("Our initial string is: %s\n", str2);
	printf("Our lowercase string is: %s\n", tex6(str2));
	assert(strcmp(tex6(str2), strlow2) == 0);

	printf("Our initial string is: %s\n", str3);
	printf("Our lowercase string is: %s\n", tex6(str3));
	assert(strcmp(tex6(str3), strlow3) == 0);

	printf("Tests ex6 Passed!\n\n");
}

void	test_ex7(char* (*tex7)(char*))
{
	char str1[]= "hello, how are you doing? 42words forty-two; fifty+and+one";
	char str2[] = "This should t tr tru trul trul truly work";
	char str3[] = "*Numbers8should*be_chec83839ked 376829N";
	char str4[] = "";
	char strlow1[] = "Hello, How Are You Doing? 42words Forty-Two; Fifty+And+One";
	char strlow2[] = "This Should T Tr Tru Trul Trul Truly Work";
	char strlow3[] = "*Numbers8should*Be_Chec83839ked 376829n";
	char strlow4[] = "";

	printf("Our initial string is: %s\n", str1);
	printf("Our transformed string is: %s\n", tex7(str1));
	assert(strcmp(tex7(str1), strlow1) == 0);

	printf("Our initial string is: %s\n", str2);
	printf("Our transformed string is: %s\n", tex7(str2));
	assert(strcmp(tex7(str2), strlow2) == 0);

	printf("Our initial string is: %s\n", str3);
	printf("Our transformed string is: %s\n", tex7(str3));
	assert(strcmp(tex7(str3), strlow3) == 0);

	printf("Our initial string is: %s\n", str4);
	printf("Our transformed string is: %s\n", tex7(str4));
	assert(strcmp(tex7(str4), strlow4) == 0);

	printf("Tests ex7 Passed!\n\n");
}

void	test_ex8(int (*tex8)(char*))
{
	char str1[]= "hello, how are you doing? 42words forty-two; fifty+and+one";
	char str2[] = "T";
	char str3[] = "*Numbers8should*be_chec83839ked 376829N";
	char str4[] = "";

	printf("Our string is: %s\n", str1);
	printf("Its length should be %i, and this function tells me it is: %i\n", 58, tex8(str1));
	assert(tex8(str1) == 58);

	printf("Our string is: %s\n", str2);
	printf("Its length should be %i, and this function tells me it is: %i\n", 1, tex8(str2));
	assert(tex8(str2) == 1);

	printf("Our string is: %s\n", str3);
	printf("Its length should be %i, and this function tells me it is: %i\n", 39, tex8(str3));
	assert(tex8(str3) == 39);

	printf("Our string is: %s\n", str4);
	printf("Its length should be %i, and this function tells me it is: %i\n", 0, tex8(str4));
	assert(tex8(str4) == 0);

	printf("Tests ex8 Passed!\n\n");
}

void	test_ex9(void (*tex9)(char*))
{
	char str1[]= "hello, how are you doing? 42words forty-two; fifty+and+one";
	char str2[] = "T";
	char str3[] = "*Numbers8should*be_chec83839ked 376829N";
	char str4[] = "";

	printf("\nOur string is:\n%s\n", str1);
	printf("And this is the one we're writing to stdout:\n");
	tex9(str1);

	printf("\nOur string is:\n%s\n", str2);
	printf("And this is the one we're writing to stdout:\n");
	tex9(str2);

	printf("\nOur string is:\n%s\n", str3);
	printf("And this is the one we're writing to stdout:\n");
	tex9(str3);

	printf("\nOur string is:\n%s\n", str4);
	printf("And this is the one we're writing to stdout:\n");
	tex9(str4);

	printf("\nTests ex9 Passed...? (maybe, I'm too lazy to actually capture Stdout)\n\n");
}

void	test_ex10(void (*tex10)(char*))
{
	char str1[]= "hello, how are you doing? 42words forty-two; fifty+and+one";
	char str2[] = "\b";
	char str3[] = "\t\r\n\f";
	char str4[3] = {31, 127 };

	char str5[] = "*Numbe\ars8\vshould*be_chec83839ked 376829N";
	char str6[] = "";

	printf("This should be:\nhello, how are you doing? 42words forty-two; fifty+and+one\n");
	tex10(str1);

	printf("\n\nThis should be:\n\\b\n");
	tex10(str2);

	printf("\n\nThis should be:\n\\t\\r\\n\\f\n");
	tex10(str3);

	printf("\n\nThis should be US and DEL:\n");
	tex10(str4);

	printf("\n\nThis should have inserted \\a and \\v in the sentence:\n");
	tex10(str5);
	
	printf("\n\nAnd this is still empty:\n");
	tex10(str6);

	printf("\nTests ex10 Passed...? (maybe, I'm too lazy to actually capture Stdout)\n\n");
}

int	main(void)
{
	printf("ft_str_is_alpha:\n");
	test_ex0(ft_str_is_alpha);

	printf("ft_str_is_numeric:\n");
	test_ex1(ft_str_is_numeric);

	printf("ft_str_is_lowercase:\n");
	test_ex2(ft_str_is_lowercase);

	printf("ft_str_is_uppercase:\n");
	test_ex3(ft_str_is_uppercase);

	printf("ft_str_is_printable:\n");
	test_ex4(ft_str_is_printable);

	printf("ft_strupcase:\n");
	test_ex5(ft_strupcase);

	printf("ft_stlowcase:\n");
	test_ex6(ft_strlowcase);

	printf("ft_strcapitalize:\n");
	test_ex7(ft_strcapitalize);

	printf("ft_strlen:\n");
	test_ex8(ft_strlen);

	printf("ft_putstr:\n");
	test_ex9(ft_putstr);

	printf("ft_putstr_non_printable:\n");
	test_ex10(ft_putstr_non_printable);

}
