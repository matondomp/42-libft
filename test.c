#include <assert.h>
#include "libft.h"

void test_atoi() {
    assert(ft_atoi("123") == 123);
    assert(ft_atoi("-456") == -456);
    assert(ft_atoi("0") == 0);
    assert(ft_atoi("") == 0); 
    assert(ft_atoi("abc") == 0); 
    assert(ft_atoi("123abc") == 123); 
    assert(ft_atoi("-456def") == -456); 
    assert(ft_atoi("   789") == 789); 
    assert(ft_atoi("456   ") == 456); 
    assert(ft_atoi("456   567") == 456); 
    assert(ft_atoi("+123") == 123); 
    assert(ft_atoi("-789") == -789); 
    assert(ft_atoi("+++-214748364") == -214748364); 
    assert(ft_atoi("+-214748364") == -214748364); 
    printf("ft_atoi: todos os testes passaram com sucesso!\n");
}
void test_bzero()
{
    int array[5] = {1, 2, 3, 4, 5};
    ft_bzero(array, sizeof(array));
    
    assert(array[0] == 0 && array[1] == 0 && array[2] == 0 && array[3] == 0 && array[4] == 0);

    char str[10] = "Hello";
    ft_bzero(str, sizeof(str));
    
    assert(str[0] == '\0' && str[1] == '\0' && str[2] == '\0' && str[3] == '\0' && str[4] == '\0' && str[5] == '\0' && str[6] == '\0' && str[7] == '\0' && str[8] == '\0' && str[9] == '\0');

    struct {
        int x;
        char c;
        float f;
    } s;
    ft_bzero(&s, sizeof(s));
    
    assert(s.x == 0 && s.c == '\0' && s.f == 0.0);

    int *ptr = malloc(5 * sizeof(int));
    ft_bzero(ptr, 5 * sizeof(int));
    
    assert(ptr[0] == 0 && ptr[1] == 0 && ptr[2] == 0 && ptr[3] == 0 && ptr[4] == 0);
    free(ptr);
    printf("ft_bzero: todos os testes passaram com sucesso!\n");
}
void test_calloc()
{
    int *array = ft_calloc(5, sizeof(int));
    
    assert(array[0] == 0 && array[1] == 0 && array[2] == 0 && array[3] == 0 && array[4] == 0);
    free(array);

    char *str = ft_calloc(10, sizeof(char));
    
    assert(str[0] == '\0' && str[1] == '\0' && str[2] == '\0' && str[3] == '\0' && str[4] == '\0' && str[5] == '\0' && str[6] == '\0' && str[7] == '\0' && str[8] == '\0' && str[9] == '\0');
    free(str); 

    typedef struct {
        int x;
        char c;
        float f;
    } Struct;
    Struct *s = ft_calloc(1, sizeof(Struct));
    
    assert(s->x == 0 && s->c == '\0' && s->f == 0.0);
    free(s);

    int *ptr = ft_calloc(5, sizeof(int));
    
    assert(ptr[0] == 0 && ptr[1] == 0 && ptr[2] == 0 && ptr[3] == 0 && ptr[4] == 0);
    free(ptr); 
    printf("ft_calloc: todos os testes passaram com sucesso!\n");
}

void test_isalnum()
{
    char c = 'a';
    assert(ft_isalnum(c) != 0);

     c = '%';
    assert(ft_isalnum(c) == 0);

     c = '5';
    assert(ft_isalnum(c) != 0);

     c = 'Z';
    assert(ft_isalnum(c) != 0); 

     c = '#';
    assert(ft_isalnum(c) == 0);

     c = '\n';
    assert(ft_isalnum(c) == 0);
    printf("ft_isalnum: todos os testes passaram com sucesso!\n");
}
void test_isalpha()
{
    assert(ft_isalpha('a') != 0);
    assert(ft_isalpha('Z') != 0); 
    assert(ft_isalpha('5') == 0);
    assert(ft_isalpha('#') == 0);
    assert(ft_isalpha('\n') == 0);
    assert(ft_isalpha(' ') == 0); 
    printf("ft_isalpha: todos os testes passaram com sucesso!\n");
}
void test_toupper()
{
    assert(ft_toupper('a') == 'A'); 
    assert(ft_toupper('5') == '5'); 
    assert(ft_toupper('Z') == 'Z'); 
    assert(ft_toupper('#') == '#'); 
    assert(ft_toupper('\n') == '\n'); 
    assert(ft_toupper(' ') == ' '); 
    printf("ft_toupper: todos os testes passaram com sucesso!\n");
}
void test_tolower()
{
    assert(ft_tolower('A') == 'a'); 
    assert(ft_tolower('5') == '5'); 
    assert(ft_tolower('z') == 'z'); 
    assert(ft_tolower('#') == '#'); 
    assert(ft_tolower('\n') == '\n'); 
    assert(ft_tolower(' ') == ' '); 
    printf("ft_tolower: todos os testes passaram com sucesso!\n");
}
void test_isdigit()
{
    assert(ft_isdigit('5') != 0); 
    assert(ft_isdigit('a') == 0); 
    assert(ft_isdigit('#') == 0); 
    assert(ft_isdigit('\n') == 0);
    assert(ft_isdigit(' ') == 0);
    assert(ft_isdigit('0') != 0);
    printf("ft_isdigit: todos os testes passaram com sucesso!\n");
}
void  test_isascii()
{
    assert(ft_isascii('a') != 0); 
    assert(ft_isascii(128) == 0);
    assert(ft_isascii('\n') != 0);
    assert(ft_isascii('#') != 0);
    assert(ft_isascii(-1) == 0);
    printf("ft_isascii: todos os testes passaram com sucesso!\n");
}
void test_isprint()
{
    assert(ft_isprint('A') != 0);
    assert(ft_isprint('\t') == 0);
    assert(ft_isprint('\n') == 0);
    assert(ft_isprint('$') != 0);
    assert(ft_isprint(' ') != 0);
    printf("ft_isprint: todos os testes passaram com sucesso!\n");
}
void test_memchr()
{
    char str[] = "Hello, World!";
    char *ptr = ft_memchr(str, 'W', sizeof(str));
    assert(ptr != NULL && *ptr == 'W');

    char str1[] = "Hello, World!";
    char *ptr1 = ft_memchr(str1, 'H', sizeof(str1));
    assert(ptr1 != NULL && *ptr1 == 'H');

    char str2[] = "Hello, World!";
    char *ptr2 = ft_memchr(str2, '!', sizeof(str2));
    assert(ptr2 != NULL && *ptr2 == '!');

    char *str3 = "";
    char *ptr3 = ft_memchr(str3, 'a', 0);
    assert(ptr3 == NULL); 
    printf("ft_memchr: todos os testes passaram com sucesso!\n");
}
void test_memcmp()
{
    int result = ft_memcmp("Hello", "Hello", 5);
    assert(result == 0);

    char str3[] = "Hello";
    char str4[] = "Hxllo";
    result = ft_memcmp(str3, str4, 5);
    assert(result != 0);

    char str5[] = "Hello";
    char str6[] = "World";
    result = ft_memcmp(str5, str6, 5);
    assert(result != 0); 

    result = ft_memcmp("Hello", "Hello, World!", 5);
    assert(result == 0);

    result = ft_memcmp("", "", 0);
    assert(result == 0);
    printf("ft_memcmp: todos os testes passaram com sucesso!\n");

}
void test_memcpy()
{
    char src[] = "Hello";
    char dest[6];
    ft_memcpy(dest, src, 5);
    assert(ft_strncmp(dest, src, 5) == 0);

    int num[] = {1, 2, 3, 4, 5};
    int *dest1 = malloc(5 * sizeof(int));
    ft_memcpy(dest1, num, 5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        assert(dest1[i] == num[i]);
    }

    char dest2[15]; 
    ft_memcpy(dest2, "Hello, World!", 5);
    assert(ft_memcmp(dest2, "Hello, World!", 5) == 0); 

    char *str = malloc(5);
    char str1[] = "Hello";
    for(int i = 0; i < 5; i++)
        str[i] = str1[i];
    ft_memcpy(str + 1, str1, 5); 
    assert(ft_strncmp(str, "HHello", 5) == 0);

    char dest3[5]; 
    ft_memcpy(dest3, "", 0);
    assert(ft_strncmp(dest3, "", 0) == 0); 
    printf("ft_memcpy: todos os testes passaram com sucesso!\n");
}
void test_memmove()
{
    char src[] = "Hello";
    char dest[6];
    ft_memmove(dest, src, sizeof(src));
    assert(ft_strncmp(dest, src, 5) == 0);

    int src1[] = {1, 2, 3, 4, 5};
    int *dest1 = malloc(5 * sizeof(int)); 
    ft_memmove(dest1, src1, 5 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        assert(dest1[i] == src1[i]); 
    }

    char src2[] = "Hello, World!";
    char dest2[15];
    ft_memmove(dest2, src2, 15);
    assert(ft_memcmp(dest2, src2, 15) == 0);

    char *str = malloc(5);
    char str1[] = "Hello";
    for(int i = 0; i < 5; i++)
        str[i] = str1[i];    
    ft_memmove(str + 1, str1, 5); 
    assert(ft_strncmp(str, "HHello", 5) == 0); 

    char src3[] = "";
    char dest3[5]; 
    ft_memmove(dest3, src3, 0);
    assert(ft_strncmp(dest3, "", 0) == 0); 

    printf("ft_memmove: todos os testes passaram com sucesso!\n");
}
void test_memset()
{
    char *str = malloc(10 * sizeof(int));
    ft_memset(str, 0, 10 * sizeof(int));
    for (int i = 0; i < 10; i++) {
        assert(str[i] == 0);
    }

    char *arr = malloc(5 * sizeof(int));
    if(!arr)
        printf("falhou a alocação de memoria");
    ft_memset(arr, 4, 5);
    for (size_t i = 0; i < 5; i++) {
        assert(arr[i] == 4); 
    }

    char *str1 = malloc(8);
    ft_memset(str1, 'A', 8);
    for (int i = 0; i < 8; i++) {
        assert(str1[i] == 'A');
    }

    char *str2 = malloc(10);
    ft_memset(str2, '*', 5);
    for (int i = 0; i < 5; i++) {
        assert(str2[i] == '*');
    }
    for (int i = 5; i < 10; i++) {
        assert(str2[i] == 0);
    }
    printf("ft_memset: todos os testes passaram com sucesso!\n");
}
void test_strchr()
{
    char str[] = "Hello, World!";
    char *ptr = ft_strchr(str, 'o');
    assert(ptr != NULL && *ptr == 'o');

    char str1[] = "Hello, World!";
    char *ptr1 = ft_strchr(str1, '!');
    assert(ptr1 != NULL && *ptr1 == '!');

    char str2[] = "Hello, World!";
    char *ptr2 = ft_strchr(str2, '\0');
    assert(ptr2 != NULL && *ptr2 == '\0');
   
    char str3[] = "Hello, World!";
    char *ptr3 = ft_strchr(str3, 'z');
    assert(ptr3 == NULL); 

    char str4[] = "";
    char *ptr4 = ft_strchr(str4, 'a');
    assert(ptr4 == NULL);
    printf("ft_strchr: todos os testes passaram com sucesso!\n");

}
void test_strdup()
{
    char *src = "Hello, World!";
    char *dup = ft_strdup(src);
    assert(ft_strncmp(dup, src, ft_strlen(src)) == 0);
    free(dup);

    char *src1 = "";
    char *dup1 = ft_strdup(src1);
    assert(ft_strncmp(dup1, src1, ft_strlen(src1)) == 0);
    free(dup1); 

    char *src2 = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam lobortis ultrices enim.";
    char *dup2 = ft_strdup(src2);
    assert(ft_strncmp(dup2, src2, ft_strlen(src2)) == 0);
    free(dup2); 

    char *src3 = "Hello, World!";
    char *dup3 = ft_strdup(src3);
    assert(dup3 != src3);
    free(dup3);

    char *src4 = "Hello";
    char *dup4 = ft_strdup(src4);
    dup4[0] = 'J'; 
    assert(ft_strncmp(dup4, "Jello", ft_strlen("Jello")) == 0);
    free(dup4);
    printf("ft_strdup: todos os testes passaram com sucesso!\n");
}
void test_strlcat()
{
    char dest[20] = "Hello";
    char *src = " World!";
    size_t original_len = ft_strlen(dest);
    size_t result = ft_strlcat(dest, src, sizeof(dest));
    assert(ft_strncmp(dest, "Hello World!", original_len) == 0);
    assert(result == original_len + ft_strlen(src));

    char dest1[10] = "Hello";
    char *src1 = "";
    original_len = ft_strlen(dest1);
    result = ft_strlcat(dest1, src1, sizeof(dest1));
    assert(ft_strncmp(dest, "Hello", original_len) == 0);
    assert(result == original_len); 

    char dest4[0] = "";
    char *src4 = "";
    result = ft_strlcat(dest4, src4, 0);
    assert(ft_strncmp(dest4, "", ft_strlen(src4)) == 0);
    assert(result == 0);

    printf("ft_strlcat: todos os testes passaram com sucesso!\n");
}
void test_strlcpy(){
    char src[] = "Hello, World!";
    char dest[20];
    size_t result = ft_strlcpy(dest, src, sizeof(dest));
    assert(ft_strncmp(dest, src, sizeof(dest)) == 0);
    assert(result == ft_strlen(src));
    char src1[] = "";
    char dest1[20];
    size_t result1 = ft_strlcpy(dest1, src1, sizeof(dest1));
    assert(ft_strncmp(dest1, src1, sizeof(dest1)) == 0);
    assert(result1 == 0); 

    char src2[] = "Hello";
    char dest2[5];
    size_t result2 = ft_strlcpy(dest2, src2, sizeof(dest2));
    assert(dest2[4] == '\0');
    assert(result2 == ft_strlen(src2));

    char src3[] = "Hello";
    char dest3[5];
    size_t result3 = ft_strlcpy(dest3, src3, sizeof(dest3));
    assert(dest3[4] == '\0');
    assert(result3 == ft_strlen(src3));

    char src4[] = "";
    char dest4[1];
    size_t result4 = ft_strlcpy(dest4, src4, sizeof(dest4));
    assert(dest4[0] == '\0'); 
    assert(result4 == 0);
    printf("ft_strlcpy: todos os testes passaram com sucesso!\n");
}
void test_strlen(){
    size_t len = ft_strlen("Hello, World!");
    assert(len == 13);

    len = ft_strlen("");
    assert(len == 0);

    char str[] = "\0";
    len = ft_strlen(str);
    assert(len == 0);

   len = ft_strlen("    ");
    assert(len == 4);

    char str1[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit. Nullam lobortis ultrices enim.";
    len = ft_strlen(str1);
    assert(len == 87);
    
    printf("ft_strlen: todos os testes passaram com sucesso!\n");
}
void test_strncmp(){
    char str1[] = "Hello";
    char str2[] = "Hello";
    int result = ft_strncmp(str1, str2, 5);
    assert(result == 0); 

    char str3[] = "Hello";
    char str4[] = "Hella";
    result = ft_strncmp(str3, str4, 5);
    assert(result > 0);

    char str5[] = "Hello";
    char str6[] = "Hellp";
    result = ft_strncmp(str5, str6, 5);
    assert(result < 0);

    char str7[] = "Hello, World!";
    char str8[] = "Hello, Moon!";
    result = ft_strncmp(str7, str8, 7);
    assert(result == 0);

    char str9[] = "Hello";
    char str210[] = "Hello, World!";
    result = ft_strncmp(str9, str210, 5);
    assert(result == 0);
    
    printf("ft_strncmp: todos os testes passaram com sucesso!\n");
}
void test_strnstr(){
    char str[] = "Hello, World!";
    char *substr = "World";
    char *result = ft_strnstr(str, substr, 13); 
    assert(result != NULL && ft_strncmp(result, "World!", 5) == 0);

    char str1[] = "Hello, World!";
    char *substr1 = "Hello";
    result = ft_strnstr(str1, substr1, 13);
    assert(result != NULL && ft_strncmp(result, "Hello, World!", 13) == 0);

    char str2[] = "Hello, World!";
    char *substr2 = "!";
    result = ft_strnstr(str2, substr2, 13);
    assert(result != NULL && ft_strncmp(result, "!", 1) == 0);

    char str3[] = "Hello, World!";
    char *substr3 = "foo";
    result = ft_strnstr(str3, substr3, 13);
    assert(result == NULL);

    char str4[] = "Hello, World!";
    char *substr4 = "";
    result = ft_strnstr(str4, substr4, 13);
    assert(result != NULL && ft_strncmp(result, str4, 0) == 0);

    printf("ft_strnstr: todos os testes passaram com sucesso!\n");
}
void test_strrchr()
{
    char str[] = "Hello, World!";
    char *ptr = ft_strrchr(str, 'o');
    assert(ptr != NULL && *ptr == 'o'); 

    char str1[] = "Hello, World!";
    char *ptr1 = ft_strrchr(str1, 'H');
    assert(ptr1 != NULL && *ptr1 == 'H');

    char str2[] = "Hello, World!";
    char *ptr2 = ft_strrchr(str2, '\0');
    assert(ptr2 != NULL && *ptr2 == '\0');

    char str3[] = "Hello, World!";
    char *ptr3 = ft_strrchr(str3, 'z');
    assert(ptr3 == NULL); 

    char str4[] = "";
    char *ptr4 = ft_strrchr(str4, 'a');
    assert(ptr4 == NULL);

    printf("ft_strrchr: todos os testes passaram com sucesso!\n");
}
void test_substr()
{
    char str[] = "Hello, World!";
    char *substr = ft_substr(str, 0, 5);
    assert(ft_strncmp(substr, "Hello", 5) == 0);
    free(substr);

    char str1[] = "Hello, World!";
    char *substr1 = ft_substr(str1, 7, 5);
    assert(ft_strncmp(substr1, "World", 5) == 0);
    free(substr1);

    char str2[] = "Hello, World!";
    char *substr2 = ft_substr(str2, 7, 100);
    assert(ft_strncmp(substr2, "World!", 6) == 0);
    free(substr2);

    char str3[] = "Hello, World!";
    char *substr3 = ft_substr(str3, 7, 0);
    assert(ft_strncmp(substr3, "", 0) == 0); 
    free(substr3);

    char str4[] = "Hello, World!";
    char *substr4 = ft_substr(str4, 20, 5);
    assert(*substr4 == 0); 

    printf("ft_substr: todos os testes passaram com sucesso!\n");
}
void test_strjoin()
{
    char str1[] = "Hello, ";
    char str2[] = "World!";
    char *result = ft_strjoin(str1, str2);
    assert(ft_strncmp(result, "Hello, World!", 13) == 0);
    free(result);

    char str3[] = "";
    char str4[] = "World!";
    result = ft_strjoin(str4, str3);
    assert(ft_strncmp(result, "World!", 6) == 0);
    free(result);

    char str5[] = "Hello, ";
    char _str5[] = "";
    result = ft_strjoin(str5, _str5);
    assert(ft_strncmp(result, "Hello, ", 7) == 0);
    free(result);

    char str6[] = "";
    char _str6[] = "";
    result = ft_strjoin(str6, _str6);
    assert(ft_strncmp(result, "", 0) == 0);
    free(result);

    char *str7 = NULL;
    char _str7[] = "World!";
    result = ft_strjoin(str7, _str7);
    assert(result == 0);
    free(result);

    printf("ft_strjoin: todos os testes passaram com sucesso!\n");
}
void test_strtrim()
{
     char str1[] = "   Hello, World!   ";
    char *trimmed1 = ft_strtrim(str1, " ");
    assert(ft_strncmp(trimmed1, "Hello, World!", ft_strlen(str1)) == 0);
    free(trimmed1);

    char str2[] = "!!!Hello, World!$$$";
    char *trimmed2 = ft_strtrim(str2, "!$");
    assert(ft_strncmp(trimmed2, "Hello, World", ft_strlen(str2)) == 0);
    free(trimmed2);

    char str3[] = "&&&";
    char *trimmed3 = ft_strtrim(str3, "&");
    assert(trimmed3 == 0);
    free(trimmed3);

    char str4[] = "Hello, World!";
    char *trimmed4 = ft_strtrim(str4, "");
    assert(ft_strncmp(trimmed4, "Hello, World!", ft_strlen(str4)) == 0);
    free(trimmed4);

    char str5[] = "@@Hello, World!@@";
    char *trimmed5 = ft_strtrim(str5, "@");
    assert(ft_strncmp(trimmed5, "Hello, World!", ft_strlen(str5)) == 0);
    free(trimmed5);

    printf("ft_strtrim: todos os testes passaram com sucesso!\n");
}
void test_split()
{
    char str1[] = "Hello,World,!";
    char **result1 = ft_split(str1, ',');
    //printf("%s", result1[0]);
    assert(ft_strncmp(result1[0], "Hello", 5) == 0);
    assert(ft_strncmp(result1[1], "World", 5) == 0);
    assert(ft_strncmp(result1[2], "!", 1) == 0);
    assert(result1[3] == NULL); 
    free(result1);

    char str2[] = "Hello World!";
    char **result2 = ft_split(str2, ' ');
    assert(ft_strncmp(result2[0], "Hello", 5) == 0);
    assert(ft_strncmp(result2[1], "World!", 6) == 0);
    assert(result2[2] == NULL); 
    free(result2);

   char str3[] = "Hello";
    char **result3 = ft_split(str3, '\0');
    assert(ft_strncmp(result3[0], "Hello", 5) == 0);
    assert(result3[1] == NULL);
    free(result3);
    
    char str4[] = "";
    char **result4 = ft_split(str4, ' ');
    assert(result4[0] == NULL);
    free(result4);
    printf("ft_split: todos os testes passaram com sucesso!\n");
}
void test_itoa()
{
    int num1 = 123;
    char *result1 = ft_itoa(num1);
    assert(ft_strncmp(result1, "123", 3) == 0);
    free(result1);

    int num2 = -456;
    char *result2 = ft_itoa(num2);
    assert(ft_strncmp(result2, "-456", 4) == 0);
    free(result2);

    int num3 = 0;
    char *result3 = ft_itoa(num3);
    assert(ft_strncmp(result3, "0", 1) == 0);
    free(result3);

    int num4 = 2147483647;
    char *result4 = ft_itoa(num4);
    assert(ft_strncmp(result4, "2147483647", 10) == 0);
    free(result4);

    int num5 = -2147483648;
    char *result5 = ft_itoa(num5);
    assert(ft_strncmp(result5, "-2147483648", 11) == 0);
    free(result5);

    printf("ft_itoa: todos os testes passaram com sucesso!\n");
}
char upper_case(unsigned int index, char c) {
    printf("%d", index);
    if (c >= 'a' && c <= 'z') {
        return c - ('a' - 'A');
    }
    return c; 
}
void test_strmapi()
{
    char str[] = "Hello, World!";
    char *result = ft_strmapi(str, &upper_case);
    assert(ft_strncmp(result, "HELLO, WORLD!",13) == 0);
    free(result);

    char str2[] = "";
    char *result2 = ft_strmapi(str2, &upper_case);
    assert(ft_strncmp(result2, "", 0) == 0);
    free(result2);

    char str3[] = "   Teste   ";
    char *result3 = ft_strmapi(str3, &upper_case);
    assert(ft_strncmp(result3, "   TESTE   ", 11) == 0);
    free(result3);

    printf("\nft_strmapi: todos os testes passaram com sucesso!\n");
}

int main() {
    test_atoi();
    test_bzero();
    test_calloc();
    test_toupper();
    test_tolower();
    test_isdigit();
    test_isalpha();
    test_isalnum();
    test_isascii();
    test_isprint();
    test_memchr();
    test_memcmp();
    test_memcpy();
    test_memmove();
    test_memset();
    test_strchr();
    test_strdup();
    test_strlcat();
    test_strlcpy();
    test_strlen();
    test_strncmp();
    test_strnstr();
    test_strrchr();
    test_substr();
    test_strjoin();
    test_strtrim();
    test_split();
    test_itoa();
    test_strmapi();
    return 0;
}
