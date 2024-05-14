#include "libft.h"

int count_digit(int n) {
    int count = 0;
    if (n == 0) return 1;
    if (n < 0) {
        count++; 
        n = -n; 
    }
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

char *ft_itoa(int n) {
    if (n == -2147483648) {
        char *str = (char *)malloc(12 * sizeof(char));
        if (!str) return NULL;
        ft_memcpy(str, "-2147483648", 11);
        return (str);
    }

    int i = count_digit(n);
    char *str = (char *)malloc((i + 1) * sizeof(char));
    if (!str) 
        return (NULL); 
    str[i--] = '\0'; 
    if (n == 0) { 
        str[0] = '0';
        return (str);
    }
    if (n < 0) {
        str[0] = '-'; 
        n = -n; 
    }
    while (n > 0) {
        str[i--] = '0' + (n % 10); 
        n /= 10; 
    }
    return str;
}
