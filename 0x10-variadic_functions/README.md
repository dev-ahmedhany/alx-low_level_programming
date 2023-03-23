# 0x10. C - Variadic functions

## 0. Beauty is variable, ugliness is constant

Write a function that returns the sum of all its parameters.

Prototype: int sum_them_all(const unsigned int n, ...);
If n == 0, return 0

```bash
julien@ubuntu:~/0x0f. variadic functions$ cat 0-main.c
#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int sum;

    sum = sum_them_all(2, 98, 1024);
    printf("%d\n", sum);
    sum = sum_them_all(4, 98, 1024, 402, -1024);
    printf("%d\n", sum);    
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-sum_them_all.c -o a
julien@ubuntu:~/0x0f. variadic functions$ ./a 
1122
500
julien@ubuntu:~/0x0f. variadic functions$ 
```

## 1. To be is to be the value of a variable

Write a function that prints numbers, followed by a new line.

Prototype: void print_numbers(const char *separator, const unsigned int n, ...);
where separator is the string to be printed between numbers
and n is the number of integers passed to the function
You are allowed to use printf
If separator is NULL, don’t print it
Print a new line at the end of your function

```bash
julien@ubuntu:~/0x0f. variadic functions$ cat 1-main.c
#include "variadic_functions.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    print_numbers(", ", 4, 0, 98, -1024, 402);
    return (0);
}
julien@ubuntu:~/0x0f. variadic functions$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-print_numbers.c -o b
julien@ubuntu:~/0x0f. variadic functions$ ./b
0, 98, -1024, 402
julien@ubuntu:~/0x0f. variadic functions$ 
```
