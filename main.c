#include "mylib.h"
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

// fix : MEMMOVE, STREQU, ITOA

void test_ft_strlen()
{
    if (strlen("6789\n0das23423..e23456") == ft_strlen("6789\n0das23423..e23456"))
    {
        printf("Test ft_strlen() passed:    1/58\n");
        return;
    }
    printf("Test ft_strlen() NOT passed:    1/58\n");
}
void test_ft_bzero()
{
    char *asrc = "a-670a83432490asdfdsg6789";
    const int len = strlen(asrc) + 1;
    char *a = malloc(len);
    char *b = malloc(len);
    strcpy(a, asrc);
    strcpy(b, asrc);
    ft_bzero(a, 5);
    bzero(b, 5);
    int result = memcmp(a, b, len);
    if (!result)
    {
        printf("Test ft_bzero() passed:    2/58\n");
        free(a);
        free(b);
        return;
    }
    printf("Test ft_bzero() NOT passed:    2/58\n");
    free(a);
    free(b);
}
void test_ft_atoi()
{
    if (ft_atoi("-12345qwert") != atoi("-12345qwert"))
    {
        printf("Test case 1 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("1234qwerty") != atoi("1234qwerty"))
    {
        printf("Test case 2 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("123qw\tertyui") != atoi("123qw\tertyui"))
    {
        printf("Test case 3 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("12ertyu\biopjg") != atoi("12ertyu\biopjg"))
    {
        printf("Test case 4 ft_atoi() NOT passed:    3/58\n");
        return;
    }

    if (ft_atoi("\ta\bdsfsgsddgs") != atoi("\ta\bdsfsgsddgs"))
    {
        printf("Test case 5 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("   123qw\tertyui") != atoi("   123qw\tertyui"))
    {
        printf("Test case 6 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("0123qw\tertyui") != atoi("0123qw\tertyui"))
    {
        printf("Test case 7 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("0123qw\tertyui") != atoi("0123qw\tertyui"))
    {
        printf("Test case 8  ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("-0123qw\tertyui") != atoi("-0123qw\tertyui"))
    {
        printf("Test case 9 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    if (ft_atoi("-q0123qw\tertyui") != atoi("-q0123qw\tertyui"))
    {
        printf("Test case 10 ft_atoi() NOT passed:    3/58\n");
        return;
    }
    printf("Test ft_atoi() passed:    3/58\n");
}
void test_ft_memset()
{
    int len = 6;
    char dest1[6] = "\0e3lo!";
    char dest2[6] = "\0e3lo!";
    int filler = 'a';
    memset(dest1, filler, 2);
    ft_memset(dest2, filler, 2);
    int res = memcmp(dest1, dest2, len);

    if (res)
    {
        printf("Test ft_memset() NOT passed:    4/58\n");
        return;
    }
    printf("Test ft_memset() passed:    4/58\n");
}
void test_ft_memccpy()
{
    char *string = "111\t\t\t-0192839qweqweN__dsasd";
    int len1 = strlen(string) + 1;
    int len2 = 9;
    int lenToCmp = 14;
    char *dest1 = malloc(len1);
    char *dest2 = malloc(len1);
    char *dest3 = malloc(len1);
    char *dest4 = malloc(len1);
    memccpy(dest1, string, 'q', len1);
    ft_memccpy(dest2, string, 'q', len1);
    memccpy(dest3, string, 'q', len2);
    ft_memccpy(dest4, string, 'q', len2);
    if (memcmp(dest1, dest2, lenToCmp))
    {
        printf("Test case 1 ft_memccpy() NOT passed:    5/58\n");
        free(dest1);
        free(dest2);
        free(dest3);
        free(dest4);
        return;
    }
    if (memcmp(dest3, dest4, len2))
    {
        printf("Test case 2 ft_memccpy() NOT passed:    5/58\n");
        free(dest1);
        free(dest2);
        free(dest3);
        free(dest4);
        return;
    }
    printf("Test ft_memccpy() passed:    5/58\n");
    free(dest1);
    free(dest2);
    free(dest3);
    free(dest4);
}
void test_ft_memmove()
{
    char *test1 = "____Hello_little_friends\t\b\t Yo!";
    char *test2 = "Indeed_hello!";
    const int len1 = ft_strlen(test1) + 1;
    const int lenToCmp = 12;
    char *buff1 = (char *)malloc(len1);
    char *buff2 = (char *)malloc(len1);
    memcpy(buff1, test1, len1);
    memcpy(buff2, test1, len1);
    void *actual = ft_memmove(buff1, test2, lenToCmp);
    void *expected = memmove(buff2, test2, lenToCmp);
    if (memcmp(actual, expected, 14))
    {
        printf("Test ft_memmove() case 1 NOT passed:    6/58\n");
        printf("Actual: %s\nExpected: %s\n", (char*)actual, (char*)expected);
        free(buff1);
        free(buff2);
        return;
    }
    if (ft_memcmp(actual, expected, len1))
    {
        printf("Test ft_memmove() case 2 NOT passed:    6/58\n");
        free(buff1);
        free(buff2);
        return;
    }
    free(buff1);
    free(buff2);
    printf("Test ft_memmove() passed:    6/58\n");
}
void test_ft_memchr()
{
    char *string = "45678945678956789_\t\t\tQ5643789624378";
    if (((char *)memchr(string, 'Q', 36)) == ((char *)ft_memchr(string, 'Q', 36)))
    {
        printf("Test ft_memchr() passed:    7/58\n");
        return;
    }
    printf("Test ft_memchr() NOT passed:    7/58\n");
}
void test_ft_memcmp()
{
    char *string1 = "47823843242934239dajsdhsdabhYGDYGSDY";
    char *string2 = "47823843242934239dajsdhsdabhYGDYGSDYdasfasfs\n\n\n\n\t\t\t1231231----&*()";
    int len = 30;
    if ((memcmp(string1, string2, len) == ft_memcmp(string1, string2, len)))
    {
        printf("Test ft_memcmp() passed:    8/58\n");
        return;
    }
    printf("Test ft_memcmp() NOT passed:    8/58\n");
}
void test_ft_memcpy()
{
    char *src1;
    src1 = "oh_my_god_i";
    int len = strlen(src1);
    char destin1[] = "56785678456785678";
    char destin2[] = "56785678456785678";
    char *s1 = memcpy(destin1, src1, 11);
    char *s2 = memcpy(destin2, src1, 11);
    int res = memcmp(s1, s2, len);
    if (!res)
    {
        printf("Test ft_memcpy() passed:    9/58\n");
        return;
    }
    printf("Test ft_memcpy() NOT passed:    9/58\n");
}
void test_ft_strdup()
{
    const char *s1 = "479123______    whf\n\n\niwe";
    char *c1 = ft_strdup(s1);
    const char *s2 = "479whfiwe";
    char *c2 = ft_strdup(s2);

    if (strcmp(c1, s1))
    {
        printf("Test ft_strdup() case1 NOT passed:    10/58\n");
        free(c1);
        free(c2);
        return;
    }

    if (strcmp(c2, s2))
    {
        printf("Test ft_strdup() case2 NOT passed:    10/58\n");
        free(c1);
        free(c2);
        return;
    }
    free(c1);
    free(c2);
    printf("Test ft_strdup()  passed:    10/58\n");
}
void test_ft_strcpy()
{
    const char *s = "479123______    whf\n\n\niwe";
    char *test1 = malloc(sizeof(char) * (strlen(s) + 1));
    char *test2 = malloc(sizeof(char) * (strlen(s) + 1));
    strcpy(test1, s);
    ft_strcpy(test2, s);
    if (strcmp(test1, test2))
    {
        printf("Test ft_strcpy() NOT passed:    11/58\n");
        free(test1);
        free(test2);
    }
    free(test1);
    free(test2);
    printf("Test ft_strcpy() passed:    11/58\n");
}
void test_ft_strncpy()
{
    const char *s = "479123______    whf\n\n\niwe";
    int len = strlen(s) + 1;
    char *expected = malloc(sizeof(char) * len);
    char *actual = malloc(sizeof(char) * len);
    strncpy(expected, s, 15);
    ft_strncpy(actual, s, 15);

    if (ft_strcmp(expected, actual))
    {
        free(expected);
        free(actual);
        printf("Test ft_strncpy() NOTpassed:    12/58\n");
    }
    printf("Test ft_strncpy()  passed:    12/58\n");
    free(expected);
    free(actual);
}
void test_ft_strcat()
{
    char *s1 = "first string\b\t";
    char *s2 = "second";
    int size = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
    char *actual = malloc(size);
    char *expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected, s1);

    strcat(expected, s2);
    ft_strcat(actual, s2);

    if (ft_strcmp(actual, expected))
    {
        printf("Test ft_strcat() NOT passed:    13/58\n");
        return;
    }
    printf("Test ft_strcat()  passed:    13/58\n");
    free(expected);
    free(actual);
}
void test_ft_strncat()
{
    char *s1 = "first string\b\t";
    char *s2 = "second";
    int size = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
    char *actual = malloc(size);
    char *expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected, s1);
    int from = 5;
    strncat(expected, s2, from);
    ft_strncat(actual, s2, from);

    if (ft_strcmp(actual, expected))
    {
        printf("Test ft_strncat() NOT passed:    14/58\n");
        return;
    }
    printf("Test ft_strncat()  passed:    14/58\n");
    free(expected);
    free(actual);
}
void test_ft_strlcat()
{
    char *s1 = "first string\b\t";
    char *s2 = "second";
    int size = sizeof(char) * (strlen(s1) + strlen(s2) + 1);
    char *actual = malloc(size);
    char *expected = malloc(size);

    strcpy(actual, s1);
    strcpy(expected, s1);
    int from = 5;
    int actualLen = ft_strlcat(expected, s2, from);
    int expectedLen = ft_strlcat(actual, s2, from);

    if (actualLen != expectedLen)
    {
        printf("Test ft_strlcat() NOT passed:    15/58\n");
        return;
    }
    printf("Test ft_strlcat()  passed:    15/58\n");
    free(expected);
    free(actual);
}
void test_ft_strchr()
{
    char *test = "23456789fg\b\nhjkebvncxmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (strchr(test, '0') == ft_strchr(test, '0'))
    {
        printf("Test ft_strchr() passed:    16/58\n");
        return;
    }
    printf("Test ft_strchr() NOT passed:    16/58\n");
}
void test_ft_strrchr()
{
    char *test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (strrchr(test, '0') == ft_strrchr(test, '0'))
    {
        printf("Test ft_strrchr() passed:    17/58\n");
        return;
    }

    printf("Test ft_strrchr() NOT passed:    17/58\n");
}
void test_ft_strstr()
{
    char *test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (strstr(test, "gdbg") != ft_strstr(test, "gdbg"))
    {
        printf("Test ft_strstr() case1 NOT passed:    18/58\n");
        return;
    }
    printf("Test ft_strstr()  passed:    18/58\n");
}
void test_ft_strnstr()
{
    char *test = "23456789fg\b\nhjkebvnc0xmh\tydbgdbgsa    #$0ghdsagjdbfhas";

    if (ft_strnstr(test, "gdbg", 45) == ft_strnstr(test, "gdbg", 45))
    {
        printf("Test ft_strnstr() passed:    19/58\n");
        return;
    }

    printf("Test ft_strnstr() NOT passed:    19/58\n");
}
void test_ft_strcmp()
{
    char *a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *d = "dsajfihdasbfaj";
    if (strcmp(a, b) != ft_strcmp(a, b))
    {
        printf("Test ft_strcmp() case 1 NOT passed:    20/58\n");
        return;
    }
    if ((strcmp(c, d) != ft_strcmp(c, d)))
    {
        printf("Test ft_strcmp() case 2 NOT passed:    20/58\n");
        return;
    }
    printf("Test ft_strcmp() passed:    20/58\n");
}
void test_ft_strncmp()
{
    char *a = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *b = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *c = "dsajfasdfiasdfsadfshbgaihdasbfaj";
    char *d = "r567890-cvbnm,.";
    if ((strncmp(a, b, 5) != ft_strncmp(a, b, 5)))
    {
        printf("Test ft_strncmp() NOT passed:    21/58\n");
        return;
    }
    if (strncmp(c, d, 5) != ft_strncmp(c, d, 5))
    {
        printf("Test ft_strncmp() NOT passed:    21/58\n");
        return;
    }

    printf("Test ft_strncmp() passed:    21/58\n");
}
void test_ft_isalpha()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if (!(isalpha(a) && ft_isalpha(a)))
    {
        printf("Test ft_isalpha() case 1 NOT passed:    22/58\n");
        return;
    }

    if (isalpha(b) && ft_isalpha(b))
    {
        printf("Test ft_isalpha() case 2 NOT passed:    22/58\n");
        return;
    }

    if (isalpha(c) && ft_isalpha(c))
    {
        printf("Test ft_isalpha() case 3 NOT passed:    22/58\n");
        return;
    }

    printf("Test ft_islpha() passed:    22/58\n");
}
void test_ft_isdigit()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if ((isdigit(a) && ft_isdigit(a)))
    {
        printf("Test ft_isdigit() case1 passed:    23/58\n");
        return;
    }
    if ((isdigit(b) && ft_isdigit(b)) == 0)
    {
        printf("Test ft_isdigit() case2 passed:    23/58\n");
        return;
    }
    if ((isdigit(c) && ft_isdigit(c)) != 0)
    {
        printf("Test ft_isdigit() case3 passed:    23/58\n");
        return;
    }

    printf("Test ft_isdigit() passed:    23/58\n");
}
void test_ft_isalnum()
{
    char a = 'a';
    char b = '1';
    char c = '\t';

    if (!(isalnum(a) && ft_isalnum(a)))
    {
        printf("Test ft_isalnum() case 1 NOT passed:    24/58\n");
        return;
    }
    if (!(isalnum(b) && ft_isalnum(b)))
    {
        printf("Test ft_isalnum() case 2 NOT passed:    24/58\n");
        return;
    }
    if (isalnum(c) && ft_isalnum(c))
    {
        printf("Test ft_isalnum() case 3 NOT passed:    24/58\n");
        return;
    }
    printf("Test ft_isalnum()  passed:    24/58\n");
}
void test_ft_isascii()
{
    char a = 'a';
    char b = '1';
    char c = '\t';
    int d = 12321;

    if (!(isascii(a) && ft_isascii(a)))
    {
        printf("Test ft_isascii() case 1 NOT passed:    25/58\n");
        return;
    }
    if (!(isascii(b) && ft_isascii(b)))
    {
        printf("Test ft_isascii() case 2 NOT passed:    25/58\n");
        return;
    }
    if (!(isascii(c) && ft_isascii(c)))
    {
        printf("Test ft_isascii() case 3 NOT passed:    25/58\n");
        return;
    }
    if (isascii(d) && ft_isascii(d))
    {
        printf("Test ft_isascii() case 4 NOT passed:    25/58\n");
        return;
    }
    printf("Test ft_isascii() passed:    25/58\n");
}
void test_ft_isprint()
{
    char a = 'a';
    char b = '1';
    char c = '\n';

    if (!(isprint(a) && ft_isprint(a)))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    if (!(isprint(b) && ft_isprint(b)))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    if (isprint(c) && ft_isprint(c))
    {
        printf("Test ft_isprint() case 1 NOT passed:    26/58\n");
        return;
    }
    printf("Test ft_isprint() passed:    26/58\n");
}
void test_ft_toupper()
{
    char a = 'a';
    char b = 'B';
    if (toupper(a) != ft_toupper(a))
    {
        printf("Test ft_toupper() NOT passed:    27/58\n");
        return;
    }
    if (toupper(b) != ft_toupper(b))
    {
        printf("Test ft_toupper() NOT passed:    27/58\n");
        return;
    }

    printf("Test ft_toupper() passed:    27/58\n");
}
void test_ft_tolower()
{
    char a = 'A';
    char b = 'b';
    if (tolower(a) != ft_tolower(a))
    {
        printf("Test ft_tolower() case 1 NOT passed:    28/58\n");
        return;
    }
    if (tolower(b) != ft_tolower(b))
    {
        printf("Test ft_tolower() case 2 NOT passed:    28/58\n");
        return;
    }

    printf("Test ft_tolower() passed:    28/58\n");
}
void test_ft_memalloc()
{
    char *a = ft_memalloc(10);
    if (!a)
    {
        printf("Test ft_memalloc() NOT passed:    29/58\n");
        return;
    }
    printf("Test ft_memalloc() passed:    29/58\n");

    free(a);
}
void test_ft_memdel()
{
    char *a = malloc(123);
    ft_memdel((void **)&a);
    if (a)
    {
        printf("Test ft_memdel() NOT passed:    30/58\n");
    }
    printf("Test ft_memdel() passed:    30/58\n");
}
void test_ft_strnew()
{
    size_t len = 100;
    char *a = ft_strnew(len);

    if (a)
    {
        for (int i = 0; i < 100; i++)
        {
            if (a[i] != 0)
            {
                printf("Test ft_strnew() NOT passed:    31/58\n");
                free(a);
            }
        }
    }

    printf("Test ft_strnew() passed:    31/58\n");
    free(a);
}
void test_ft_strdel()
{
    char *a = ft_strnew(100);
    char *b = NULL;
    char *testString = "jisdhfiabisnfadsbfiadsn";
    char *c = strdup(testString);
    ft_strdel(&a);
    ft_strdel(&b);
    ft_strdel(&c);
    if (a)
    {
        printf("Test ft_strdel() case 1 NOT passed:    32/58\n");
    }
    if (b)
    {
        printf("Test ft_strdel() case 2 NOT passed:    32/58\n");
    }
    if (c)
    {
        printf("Test ft_strdel() case 3 NOT passed:    32/58\n");
    }
    printf("Test ft_strdel() passed:    32/58\n");
}
void test_ft_strclr()
{
    char *constString = "jisdhfiabisnfadsbfiadsn";
    char *stringToBeNulled = strdup(constString);
    ft_strclr(stringToBeNulled);
    int len = strlen(stringToBeNulled);
    for (int i = 0; i < len; ++i)
    {
        if (stringToBeNulled[i] != '\0')
        {
            printf("Test ft_strclr() NOT passed:    33/58\n");
            free(stringToBeNulled);
            return;
        }
    }
    printf("Test ft_strclr() passed:    33/58\n");
}
void test_iter_toupper(char *b)
{
    for (size_t i = 0; i <= strlen(b); i++)
    {
        b[i] = toupper(b[i]);
    }
}
void test_ft_striter()
{
    char *testConstString = "const";
    char *testOutputString = "CONST";
    char *b = strdup(testConstString);
    ft_striter(b, test_iter_toupper);
    int result = strcmp(b, testOutputString);
    if (result)
    {
        printf("Test ft_striter() NOT passed:    34/58\n");
        free(b);
        return;
    }
    free(b);
    printf("Test ft_striter()  passed:    34/58\n");
}
void test_iteri_toupper(unsigned int i, char *b)
{
    for (i = 0; i <= strlen(b); i++)
    {
        b[i] = toupper(b[i]);
    }
}
void test_ft_striteri()
{
    char *testConstString = "const";
    char *testOutputString = "CONST";
    char *b = strdup(testConstString);
    ft_striteri(b, test_iteri_toupper);
    int result = strcmp(b, testOutputString);
    if (result)
    {
        printf("Test ft_striteri() NOT passed:    35/58\n");
        free(b);
        return;
    }
    free(b);
    printf("Test ft_striteri()  passed:    35/58\n");
}
char test_map_upper(char c)
{
    return toupper(c);
}
void test_ft_strmap()
{
    char *input = "string";
    char *output = "STRING";
    char *b = ft_strmap(input, test_map_upper);
    if (strcmp(b, output))
    {
        printf("Test ft_strmap() NOT passed:    36/58\n");
        free(b);
        return;
    }

    printf("Test ft_strmap() passed:    36/58\n");
    free(b);
}
char test_to_upper_odd(unsigned int index, char a)
{
    if(index%2==0)
    {
        return toupper(a);
    }
    else
        return a;
}
void test_ft_strmapi()
{
    char *input = "const";
    char *expectedOutput = "CoNsT";
    char *b = ft_strmapi(input, test_to_upper_odd);
    if (strcmp(b, expectedOutput))
    {
        printf("Test ft_strmapi() NOT passed:    37/58\n");
        printf("%s\n", b);
        free(b);
        return;
    }
    free(b);
    printf("Test ft_strmapi() passed:    37/58\n");
}
void test_ft_strequ()
{
    char a[] = "fdshf2432423";
    char b[] = "fdshf2432423";
    char c[] = "fdshf";

    if (ft_strequ(a, c))
    {
        printf("Test ft_strequ() case 1 NOT passed:    38/58\n");
        return;
    }
    if (ft_strequ(a, b) != 1)
    {
        printf("Test ft_strequ() case 2 NOT passed:    38/58\n");
        return;
    }

    printf("Test ft_strequ()  passed:    38/58\n");
}
void test_ft_strnequ()
{
    char a[] = "fdshf2432423";
    char b[] = "fdshf2432423";
    char c[] = "fdshf";

    if (ft_strnequ(a, c, 13))
    {
        printf("Test ft_strnequ() case 1 NOT passed:    39/58\n");
        return;
    }
    if (!ft_strnequ(a, b, 6))
    {
        printf("Test ft_strnequ() case 2 NOT passed:    39/58\n");
        return;
    }

    printf("Test ft_strequ()  passed:    38/58\n");
}
void test_ft_strsub()
{
    char *a = "123456789";
    char *b = ft_strsub(a, 1, 9);
    if (strcmp(b, "23456789"))
    {
        printf("Test ft_strsub() NOT passed:    40/58\n");
        free(b);
        return;
    }

    printf("Test ft_strmsub()  passed:    40/58\n");
}
void test_ft_strjoin()
{
    char *a = "jfdsfsd1";
    char *b = "1jsfsdffsdfs";
    char *expected = "jfdsfsd11jsfsdffsdfs";
    char *ab = ft_strjoin(a, b);
    if (strcmp(expected, ab))
    {
        printf("Test ft_strjoin() NOT passed:    41/58\n");
        free(ab);
        return;
    }
    free(ab);
    printf("Test ft_strjoin() passed:    41/58\n");
}
void test_ft_strtrim()
{
    char *input = " 123123123 ";
    char *expected = "123123123";
    char *a = ft_strtrim(input);
    if (strcmp(a, expected))
    {
        printf("Test ft_strtrim() NOT passed:    42/58\n");
        free(a);
        return;
    }
    free(a);
    printf("Test ft_strtrim()  passed:    42/58\n");
}
void freeSplitted(char **splitted)
{
    for (int i = 0; i<3; i++)
    {
        free(splitted[i]);
    }
    free(splitted);
}
void test_ft_strsplit()
{

    char *a = "***first**second*third*****";
    char **splited = ft_strsplit(a, '*');
    const char *expected[] = {"first", "second", "third"};

    for (int i = 0; i<3; i++)
    {
        if (strcmp(splited[i], expected[i]))
        {
            printf("Test ft_strsplit() on word[%d] = %s  NOT passed:    43/58\n", i, expected[i]);
            freeSplitted(splited);
            return;
        }
    }

    freeSplitted(splited);
    printf("Test ft_strsplit()  passed:    43/58\n");
}
void test_ft_itoa()
{
    int a = -85839;
    char *expected = "-85839";
    // printf("char *expected = -85839;\n");
    char *output = ft_itoa(a);
    // printf("char *output = ft_itoa(a);\n");

    if (ft_strcmp(expected, output))
    {
        printf("Test ft_itoa() NOT passed:    44/58\n");
        free(output);
        return;
    }
    free(output);
    printf("Test ft_itoa() passed:    44/58\n");
}
void test_ft_putchar()
{
    char *testString = "Test ft_putchar() passed:    45/58\n";
    int len = strlen(testString);
    for (int i = 0; i < len; ++i)
    {
        ft_putchar(testString[i]);
    }
}
void test_ft_putstr()
{
    char *testString = "Test ft_putstr() passed:    46/58\n";
    ft_putstr(testString);
}
void test_ft_putendl()
{
    char *testString = "Test ft_putendl() passed:    47/58";
    ft_putendl(testString);
}
void test_ft_putnbr()
{
    char *testString = "Test ft_putnbr() passed:    ";

    int currentTestNumber = 48;
    int testLen = 58;
    ft_putstr(testString);
    ft_putnbr(currentTestNumber);
    ft_putchar('/');
    ft_putnbr(testLen);
    ft_putchar('\n');
}
void test_ft_putchar_fd()
{
    char *testString = "Test ft_putchar_fd() passed:    45/58\n";
    int len = strlen(testString);
    for (int i = 0; i < len; ++i)
    {
        ft_putchar_fd(testString[i], 1);
    }
}
void test_ft_putstr_fd()
{
    char *testString = "Test ft_putstr_fd() passed:    46/58\n";
    ft_putstr_fd(testString, 1);
}
void test_ft_putendl_fd()
{
    char *testString = "Test ft_putendl_fd() passed:    51/58";
    ft_putendl_fd(testString, 1);
}
void test_ft_putnbr_fd()
{
    char *testString = "Test ft_putnbr_fd() passed:    ";
    int currentTestNumber = 52;
    int testLen = 58;
    ft_putstr(testString);
    ft_putnbr_fd(currentTestNumber, 1);
    ft_putchar('/');
    ft_putnbr(testLen);
    ft_putchar('\n');
}
void test_ft_lstnew()
{
    char *content = "content";
    size_t contentSize = (strlen(content) + 1);
    t_list *new = ft_lstnew(content, contentSize);

    if (!memcmp(content, new->content, contentSize) && new->content_size == contentSize)
    {
        printf("Test ft_lstnew() passed:    53/58\n");
        free(new->content);
        free(new);
        return;
    }

    printf("Test ft_lstnew() NOT passed:    53/58\n");
}
void del(void *content, size_t size)
{
    memset(content, 0, size);
    free(content);
}
void test_ft_lstdelone()
{
    char *content = "content";
    size_t contentSize = (strlen(content) + 1);
    t_list *new = ft_lstnew(content, contentSize);

    ft_lstdelone(&new, del);
    if (new)
    {
        printf("Test ft_lstdelone() NOT passed:    54/58\n");
        return;
    }
    printf("Test ft_lstdelone() passed:    54/58\n");
}
int lstLen(t_list *head)
{
    if (!head)
    {
        return 0;
    }
    int i = 0;
    while (head)
    {
        i++;
        head = head->next;
    }
    return i;
}
void test_ft_lstdel()
{
    char *headContent = "content";
    size_t headContentSize = (strlen(headContent) + 1);
    char *newHeadContent = "newHeadContent";
    size_t newHeadContentSize = (strlen(newHeadContent) + 1);
    char *newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentSize2 = (strlen(newHeadContent2) + 1);

    t_list *head = ft_lstnew(headContent, headContentSize);
    t_list *newHead = ft_lstnew(newHeadContent, newHeadContentSize);
    ft_lstadd(&head, newHead);
    t_list *newHead2 = ft_lstnew(newHeadContent2, newHeadContentSize2);
    ft_lstadd(&newHead, newHead2);
    int curentLen = lstLen(newHead2);
    if (!curentLen)
    {
        printf("Test ft_lstdel() NOT passed:    55/58\n");
        return;
    }
    // printf("head = %p\nnewHead = %p\nnewHead2 = %p\n",head,newHead,newHead2);
    ft_lstdel(&newHead2, del);
    int listLengthAfterDel = lstLen(newHead2);
    if (listLengthAfterDel)
    {
        printf("Test ft_lstdel() NOT passed:    55/58\n");
        return;
    }
    printf("Test ft_lstdel() passed:    55/58\n");
}
void test_ft_lstadd()
{

    char *headContent = "content";
    size_t headContentSize = (strlen(headContent) + 1);
    char *newHeadContent = "newHeadContent";
    size_t newHeadContentSize = (strlen(newHeadContent) + 1);
    char *newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentSize2 = (strlen(newHeadContent2) + 1);

    t_list *head = ft_lstnew(headContent, headContentSize);
    t_list *newHead = ft_lstnew(newHeadContent, newHeadContentSize);
    ft_lstadd(&head, newHead);
    t_list *newHead2 = ft_lstnew(newHeadContent2, newHeadContentSize2);
    ft_lstadd(&newHead, newHead2);
    int curentLen = lstLen(newHead2);
    if (curentLen != 3)
    {
        printf("Test ft_lstdel() NOT passed:    55/58\n");
        ft_lstdel(&newHead2, del);
        return;
    }
    ft_lstdel(&newHead2, del);
    printf("Test ft_lstadd() passed:    56/58\n");
}
const char *valueForTest = "value";
void testLstIterFunc(t_list *elem)
{

    free(elem->content);
    elem->content_size = strlen(valueForTest);
    elem->content = malloc(elem->content_size);
    memcpy(elem->content, valueForTest, elem->content_size);
}
void test_ft_lstiter()
{
    char *headContent = "content";
    size_t headContentLen = strlen(headContent) + 1;

    char *newHeadContent = "newHeadContent";
    size_t newheadContentLen = strlen(newHeadContent) + 1;

    char *newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentLen2 = strlen(newHeadContent2) + 1;

    t_list *head = ft_lstnew(headContent, headContentLen);
    t_list *newHead = ft_lstnew(newHeadContent, newheadContentLen);
    ft_lstadd(&head, newHead);
    t_list *newHead2 = ft_lstnew(newHeadContent2, newHeadContentLen2);
    ft_lstadd(&newHead, newHead2);

    ft_lstiter(newHead2, testLstIterFunc);
    t_list *iter = newHead2;
    const size_t newConentSize = strlen(valueForTest);
    while (iter)
    {
        if (iter->content_size != newConentSize || memcmp(iter->content, valueForTest, newConentSize))
        {

            printf("Test ft_lstiter() NOT passed:    57/58\n");
            ft_lstdel(&newHead2, del);
            return;
        }
        iter = iter->next;
    }
    ft_lstdel(&newHead2, del);
    printf("Test ft_lstiter() passed:    57/58\n");
}
t_list *testLstMapFunc(t_list *elem)
{
    char *newContent = ft_strjoin(valueForTest, elem->content);
    size_t newContentLen = strlen(newContent);
    return ft_lstnew(newContent, newContentLen);
}
void test_ft_lstmap()
{
    char *headContent = "content";
    size_t headContentLen = strlen(headContent) + 1;

    char *newHeadContent = "newHeadContent";
    size_t newheadContentLen = strlen(newHeadContent) + 1;

    char *newHeadContent2 = "newHeadContent 2";
    size_t newHeadContentLen2 = strlen(newHeadContent2) + 1;

    t_list *head = ft_lstnew(headContent, headContentLen);
    t_list *newHead = ft_lstnew(newHeadContent, newheadContentLen);
    ft_lstadd(&head, newHead);
    t_list *newHead2 = ft_lstnew(newHeadContent2, newHeadContentLen2);
    ft_lstadd(&newHead, newHead2);

    ft_lstiter(newHead2, testLstIterFunc);

    t_list *newListFromMap = ft_lstmap(newHead2, testLstMapFunc);
    t_list *iter = newHead2;
    t_list *mapIter = newListFromMap;
    char *test = NULL;
    size_t len = 0;
    int cmpResult = 0;
    while (iter)
    {
        test = ft_strjoin(valueForTest, iter->content);
        len = strlen(test);
        cmpResult = memcmp(test, mapIter->content, len);
        if (!mapIter)
        {
            printf("Test ft_lstmap() NOT passed:    58/58\n");
            ft_lstdel(&newHead2, del);
            ft_lstdel(&newListFromMap, del);
            return;
        }
        if (cmpResult || mapIter->content_size != len)
        {
            printf("Test ft_lstmap() NOT passed:    58/58\n");
            ft_lstdel(&newHead2, del);
            ft_lstdel(&newListFromMap, del);
            return;
        }
        mapIter = mapIter->next;
        iter = iter->next;
    }
    ft_lstdel(&newHead2, del);
    ft_lstdel(&newListFromMap, del);
    printf("Test ft_lstmap() passed:    58/58\n");
}
int main()
{
    printf("Testing lib for errors!\n");
    printf("Library to ft_ functions test:\n");
    /*test1*/ test_ft_strlen();
    /*test2*/ test_ft_bzero();
    /*test3*/ test_ft_atoi();
    /*test4*/ test_ft_memset();
    /*test5*/ test_ft_memccpy();
    /*test6*/ test_ft_memmove();
    /*test7*/ test_ft_memchr();
    test_ft_memcmp();
    test_ft_memcpy();
    test_ft_strdup();
    test_ft_strcpy();
    test_ft_strncpy();
    test_ft_strcat();
    test_ft_strncat();
    test_ft_strlcat();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strstr();
    test_ft_strnstr();
    test_ft_strcmp();
    test_ft_strncmp();
    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_toupper();
    test_ft_tolower();
    printf("Custom ft_ functions test:\n");
    test_ft_memalloc();
    test_ft_memdel();
    test_ft_strnew();
    test_ft_strdel();
    test_ft_strclr();
    test_ft_striter();
    test_ft_striteri();
    test_ft_strmap();
    test_ft_strmapi();
    test_ft_strequ();
    test_ft_strnequ();
    test_ft_strsub();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_strsplit();
    test_ft_itoa();
    test_ft_putchar();
    test_ft_putstr();
    test_ft_putendl();
    test_ft_putnbr();
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();
    test_ft_lstnew();
    test_ft_lstdelone();
    test_ft_lstdel();
    test_ft_lstadd();
    test_ft_lstiter();
    test_ft_lstmap();

    printf("Tests has been finished.\n");

    return 0;
}
// #include "./mylib.h"
// #include <stdio.h>

// char my_toup(char c){
//     printf("In the function my_toup (with ft_toupper) %c\n", c);
//     c = ft_toupper(c);
//  	return c;
// }

// char my_tolow(unsigned int i, char c){
//   	printf("In the function my_tolow (with ft_tolower): index = %d and %c\n", i, c);
//     c = ft_tolower(c);
//   	return c;
// }

// void myfunc1(char*str){
//     printf("In the my function1 %s.\n", str);
// }

// void myfunc2(unsigned int i, char *str){
//     printf("In the my function2: index = %d and the string is %s\n", i, str);
// }

// void my_print_list(t_list* lst){
//     printf("The content is %s, size = %zu\n", (char*)lst->content, lst->content_size);
// }

// t_list* my_tolow_lst(t_list*elem){
//     printf("The content is %s, size = %d\n", (char*)elem->content, (int)elem->content_size);
//     return elem;
// }

// void ft_memdel_range(void *mem, size_t mem_size){
//     if (mem){
//         free(mem);
//         mem = NULL;
//     }
//     (void)mem_size;    
// }

// int main(){
// // // Check ft_atoi
// //     char* npt = "12345678As";
// //     printf("The result of function ft_atoi is %d\n", ft_atoi(npt));
// // // Check ft_itoa
// //     int ito = 87654321;    
// //     printf("The result of function ft_itoa is %s\n", ft_itoa(ito));
// // // Chek ft_bzero and ft_strcpy
// //     char* start = (char*)malloc(10);
// //     ft_strcpy(start, "asdfg");
// //     ft_bzero(start, 10);
// //     printf("The result of function ft_bzero is %s\n", start);
// //     free (start);
// // // Check ft_isalnum
// //     int a = '7';
// //     int b = 'c';
// //     int c = ' ';
// //     int A = ft_isalnum(a);
// //     int B = ft_isalnum(b);
// //     int C = ft_isalnum(c);
// //     printf("The result of function ft_isalnum:");
// //     if(A == 1){printf(" a is number,");}else{printf(" a is not number,");}
// //     if(B == 1){printf(" b is number,");}else{printf(" b is not number,");}
// //     if(C == 1){printf(" c is number.\n");}else{printf(" c is not number.\n");}  
// // // Check ft_isalpha
// //     A = ft_isalpha(a);
// //     B = ft_isalpha(b);
// //     C = ft_isalpha(c);
// //     printf("The result of function ft_isalpha:");
// //     if(A == 1){printf(" a is alpha,");}else{printf(" a is not alpha,");}
// //     if(B == 1){printf(" b is alpha,");}else{printf(" b is not alpha,");}
// //     if(C == 1){printf(" c is alpha.\n");}else{printf(" c is not alpha.\n");} 
// // // Check ft_isascii
// //     A = ft_isascii(a);
// //     B = ft_isascii(b);
// //     C = ft_isascii(c);
// //     printf("The result of function ft_isascii:");
// //     if(A == 1){printf(" a is ascii,");}else{printf(" a is not ascii,");}
// //     if(B == 1){printf(" b is ascii,");}else{printf(" b is not ascii,");}
// //     if(C == 1){printf(" c is ascii.\n");}else{printf(" c is not ascii.\n");}
// // // Check ft_isdigit
// //     A = ft_isdigit(a);
// //     B = ft_isdigit(b);
// //     C = ft_isdigit(c);
// //     printf("The result of function ft_isdigit:");
// //     if(A == 1){printf(" a is digit,");}else{printf(" a is not digit,");}
// //     if(B == 1){printf(" b is digit,");}else{printf(" b is not digit,");}
// //     if(C == 1){printf(" c is digit.\n");}else{printf(" c is not digit.\n");}
// // // Check ft_isprint
// //     A = ft_isprint(a);
// //     B = ft_isprint(b);
// //     C = ft_isprint(c);
// //     printf("The result of function ft_isprint:");
// //     if(A == 1){printf(" a is print,");}else{printf(" a is not print,");}
// //     if(B == 1){printf(" b is print,");}else{printf(" b is not print,");}
// //     if(C == 1){printf(" c is print.\n");}else{printf(" c is not print.\n");}
// // // Check ft_strlen and ft_memalloc 
// //     char* memal = (void*)ft_memalloc(10);
// //     int len = ft_strlen(memal);
// //     printf("The result of function ft_memalloc is %s and it have %d size\n", memal, len);
// //     free(memal);
// // // Check ft_memcpy and ft_memdel
// //     char *src = "abcdefghijk";
// //     char* dest = (char*)malloc(ft_strlen(src)+1);
// //     int z = 'e';
// //     size_t size = 10;
// //     (char*)ft_memccpy(dest, src, z, size);
// //     printf("The result of function ft_memccpy is %s\n", dest);
// //     ft_memdel((void**)&dest);
// //     printf("The result of function ft_memdel is %p.\n", dest);
// // // Check ft_memchr
// //     char new[11]="1234567890";
// //     char *sym = ft_memchr (new, '4', 10);
// //     if (sym != NULL){
// //         sym[0]='!';
// //     }   
// //     printf("The result of function ft_memchr is %s\n", new);
// // // Check ft_memcmp, ft_strcpy, ft_strclr and ft_strdel
// //     char* str1 = "qwedewqr";
// //     char* str2 = "qwed";
// //     size_t n = 5;
// //     printf("The result of function ft_memcmp is %d\n", ft_memcmp(str1, str2, n));
// //     char*temp_str1 = ft_strnew(ft_strlen(str1)+1);
// //     ft_strcpy(temp_str1, str1);
// //     ft_strclr(temp_str1);
// //     char*temp_str2 = ft_strnew(ft_strlen(str2)+1);
// //     ft_strcpy(temp_str2, str2);
// //     ft_strdel((char**)&temp_str2);
// //     printf("The result of deleting strings temp_str1 and temp_str2 with functions ft_strclr for temp_str1 is: %s on %p, and ft_strdel for temp_str2 is: %p.\n", temp_str1, (char*)temp_str1, (char**)temp_str2);
// // // Check ft_memcpy
// //     char* new2 = (char*)malloc(ft_strlen(new));
// //     ft_memcpy(new2, new, 7);
// //     printf("The resoult of function ft_memcpy is %s\n", new2);
// //     free(new2);
// // // check ft_memmove
// //     char dst[] = "Goodbye my friend";
// //  	char hello[] = "Hello my friend";
// //  	ft_memmove(dst, hello, 7);
// //  	printf("The result of function ft_memmove is: %s\n", dst);
// // // Check ft_memset
// //     ft_memset(dst, '!', 10);
// //     printf("The result of function ft_memset is: %s\n", dst);
// // // Check ft_puchar
// //     char w = 'w'; 
// //     ft_putchar('S');
// //     printf(" is the result of function ft_putchar.\n");
// // // Check ft_putchar_fd
// //     ft_putchar_fd(w, 1);
// //     printf(" is the result of function ft_putchar_fd.\n");
// // // Check ft_putendl
// //     ft_putendl("Never give up!");
// //     printf("is the result of function ft_putendl.\n");
// // // Check ft_putendl_fd
// //     ft_putendl_fd(src, 1);
// //     printf("is the result of function ft_putendl_fd.\n");   
// // // Check ft_putnbr
// //     int nbr = 1234567;
// //     ft_putnbr(nbr);
// //     printf(" is the result of function ft_putnbr.\n");
// // // Check ft_putnbr_fd
// //     ft_putnbr_fd(nbr,1);
// //     printf(" is the result of function ft_putnbr_fd.\n");
// // // Check ft_putstr
// //     ft_putstr(hello);
// //     printf(" is the result of function ft_putstr.\n");
// // // Chek ft_putstr_fd
// //     ft_putstr_fd(hello, 1);
// //     printf(" is the result of function ft_putstr_fd.\n");
// // // Chek ft_strnew, ft_strlen, ft_strcpy, ft_strcat, ft_strstr, ft_strnstr, ft_strchr and ft_strrchr
// //     char* never = "never";
// //     char* give_up = " give up!";
// //     int len_phrase = ft_strlen(never)+ft_strlen(give_up)+1;
// //     char* phrase = ft_strnew(len_phrase);
// //     printf("The result of function ft_strnew is %s.\n", phrase);
// //     ft_strcpy(phrase, never);   
// //     printf("The result of function ft_strlen is %d, ft_strcpy and ft_strcat is: %s\n",len_phrase, ft_strcat(phrase,give_up));
// //     printf("The result of function ft_strstr is: %s.\n", ft_strstr(phrase, give_up));
// //     printf("The result of function ft_strnstr in first 6 symbols is: %s.\n", ft_strnstr(phrase, never, 6));
// //     printf("The result of function ft_strchr with char 'e' is: %s.\n", ft_strchr(phrase, 'e'));
// //     printf("The result of function ft_strrchr with char 'i' is: %s.\n", ft_strrchr(phrase, 'i'));
// //     free(phrase);
// // // Check ft_strlcat
// //     char*temp_strlcat = (char*)malloc(len_phrase);
// //     ft_strcpy(temp_strlcat, never);
// //     ft_strlcat(temp_strlcat, give_up, 8);
// //     printf("The temp string of function ft_strlcat is %s.\n", temp_strlcat);
// // // Check ft_strncat, ft_strcmp and ft_strncmp
// //     char*temp_strncat = (char*)malloc(ft_strlen(never)+11);
// //     ft_strcpy(temp_strncat, never);
// //     ft_strncat(temp_strncat, give_up, 5);
// //     printf("The result of function ft_strncat is: %s.\n", temp_strncat);
// //     printf("The result of comparison temp_strlcat and temp_strncat (with ft_strcmp) is %d.\n", ft_strcmp(temp_strlcat, temp_strncat));
// //     printf("The result of comparison first 6 symbols temp_strlcat and temp_strncat (with strncmp)is %d.\n", ft_strncmp(temp_strlcat, temp_strncat, 6));
// //     free(temp_strncat);
// //     free(temp_strlcat);
// // // Check ft_strmap
// //     char* temp_strmap = ft_strmap(never, my_toup);
// //     printf("The start string is: %s, the result of function ft_strmap is: %s.\n", never, temp_strmap);    
// // // Chek ft_strmapi
// //     char* temp_strmapi = ft_strmapi(temp_strmap, my_tolow); 
// //     printf("The start string is: %s, the result of function ft_strmapi is: %s.\n", temp_strmap, temp_strmapi);
// //     free(temp_strmapi);
// //     free(temp_strmap);
// // // Check ft_striter
// //     char*temp_striter = (char*)malloc(ft_strlen(never)+1);
// //     ft_strcpy(temp_striter, never);
// //     ft_striter(temp_striter, myfunc1);
// //     printf("The result of function ft_striter is %s.\n", temp_striter);
// //     free(temp_striter);
// // // Check ft_stiteri
// //     char*temp_striteri = (char*)malloc(ft_strlen(give_up)+1);
// //     ft_strcpy(temp_striteri, give_up);
// //     ft_striteri(temp_striteri, myfunc2);    
// //     printf("The result of function ft_striteri is %s.\n", temp_striteri);
// //     free(temp_striteri);  
// // // Check ft_strdup
// //     char*temp_strdup = ft_strdup(never);
// //     printf("The origing string is: %s. The duplicat string (with ft_strdup) is: %s.\n", never, temp_strdup);
// //     free(temp_strdup);
// // // Check ft_strjoin
// //     char*temp_strjoin = ft_strjoin(never, give_up);
// //     printf("The initial strings are %s and %s. The result string of function ft_strjoin is %s.\n", never, give_up, temp_strjoin);
// //     free(temp_strjoin);
// // // Check ft_strequ
// //     char* never2 = (char*)malloc(ft_strlen(never)+1);
// //  	int result = ft_strequ(never, never2);
// //     if(result == 0){
// //         printf("The strings are identical.\n");
// //     }else{printf("The strings are not identical.\n");}
// // // Check ft_strnequ
// //     int nresult = ft_strnequ(never, never2, 4);
// //     if(result == 0){
// //         printf("The 4 symbols of strings are identical.\n");
// //     }else{printf("The 4 symbols of strings are not identical.\n");}
// // // Check ft_strsub
// //     char* temp_strsub = ft_strsub(hello, 6, 3);
// //     printf("The result of function ft_strsub is %s.\n", temp_strsub);
// //     free(temp_strsub);
// // // Check ft_strtrim
// //     char* temp_strtrim = "  \t Hello, Lenka!\t \n";
// //     printf("The result of function ft_strtrim is:\n");
// //     printf("--Old string is %s\n", temp_strtrim);
// //     char* new_strtrim =  ft_strtrim(temp_strtrim); 
// //     printf("--New string is %s\n", ft_strtrim(temp_strtrim));
// // // Check ft_strsplit
// //     char* temp_split= "hello fellow   students ";
// //     char **res_split = ft_strsplit(temp_split, ' ');
// //     printf("The result of function ft_strsplit is:\n");
// //     int it = 0;
// //     while(res_split[it] != 0){
// //         printf("The result is %s\n", res_split[it]);
// //         it++;
// //     }	
// // Check function lst
//     t_list* big_list = (t_list*)malloc(sizeof(t_list));   
    
//     char*node1 = "node 1";
//     int lenlst1 = ft_strlen(node1)+1;
//     t_list* my_list1 = ft_lstnew(node1, lenlst1);    
//     ft_lstadd(&big_list, my_list1);   
    
//     char* node2 = "node 2";
//     int lenlst2 = ft_strlen(node2)+1;
//     t_list* my_list2 = ft_lstnew(node2, lenlst2);
//     ft_lstadd(&big_list, my_list2);        
//     ft_lstiter(big_list, my_print_list);
//     ft_lstmap(big_list, my_tolow_lst);
//     // ft_lstdelone(&my_list1, ft_memdel_range);
//     // ft_lstiter(big_list, my_print_list);
//     ft_lstdel(&big_list, ft_memdel_range);
//     ft_lstiter(big_list, my_print_list);
               
//  }