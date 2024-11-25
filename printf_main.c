#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
    int org_ret;
    int ft_ret;
    
    // Basic character test
    printf("\n=== Testing %%c ===\n");
    org_ret = printf("Original: %c\n", 'A');
    ft_ret = ft_printf("ft_print: %c\n", 'A');
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // String test
    printf("\n=== Testing %%s ===\n");
    org_ret = printf("Original: %s\n", "Hello World!");
    ft_ret = ft_printf("ft_print: %s\n", "Hello World!");
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // Integer tests
    printf("\n=== Testing %%d and %%i ===\n");
    org_ret = printf("Original: %d, %i\n", 42, -42);
    ft_ret = ft_printf("ft_print: %d, %i\n", 42, -42);
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // Unsigned test
    printf("\n=== Testing %%u ===\n");
    org_ret = printf("Original: %u\n", UINT_MAX);
    ft_ret = ft_printf("ft_print: %u\n", UINT_MAX);
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // Hexadecimal tests
    printf("\n=== Testing %%x and %%X ===\n");
    org_ret = printf("Original: %x, %X\n", 255, 255);
    ft_ret = ft_printf("ft_print: %x, %X\n", 255, 255);
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // Pointer test
    int number = 42;
    printf("\n=== Testing %%p ===\n");
    org_ret = printf("Original: %p\n", (void *)&number);
    ft_ret = ft_printf("ft_print: %p\n", (void *)&number);
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);
    
    // Percent sign test
    printf("\n=== Testing %%%% ===\n");
    org_ret = printf("Original: %%\n");
    ft_ret = ft_printf("ft_print: %%\n");
    printf("Return values - Original: %d, ft_printf: %d\n", org_ret, ft_ret);

    return (0);
}