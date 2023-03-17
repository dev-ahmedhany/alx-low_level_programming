# 0x05. C - Pointers, arrays and strings

## 0. 98 Battery st

Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: `void reset_to_98(int *n);`

```bash
julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 
```

## 1. Don't swap horses in crossing a stream

Write a function that swaps the values of two integers.

Prototype: `void swap_int(int *a, int *b);`

```bash
julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
```

## 2. This report, by its very length, defends itself against the risk of being read

Write a function that returns the length of a string.

Prototype: `int _strlen(char *s);`
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

```bash
julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
16
julien@ubuntu:~/0x05$ 
```

## 3. I do not fear computers. I fear the lack of them

Write a function that prints a string, followed by a new line, to stdout.

Prototype: `void _puts(char *str);`
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

```bash
julien@ubuntu:~/0x05$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 
```

## 4. I can only go one way. I've not got a reverse gear

Write a function that prints a string, in reverse, followed by a new line.

Prototype: `void print_rev(char *s);`

```bash
julien@ubuntu:~/0x05$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 
```

## 5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes

Write a function that reverses a string.

Prototype: `void rev_string(char *s);`

```bash
julien@ubuntu:~/0x05$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/0x05$ ./5-rev_string 
My School
loohcS yM
julien@ubuntu:~/0x05$ 
```

## 6. Half the lies they tell about me aren't true

Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: `void puts2(char *str)`;

```bash
julien@ubuntu:~/0x05$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$
```

## 7. Winning is only half of it. Having fun is the other half

Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2

```bash
julien@ubuntu:~/0x05$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
```

## 8. Arrays are not pointers

Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf

```bash
julien@ubuntu:~/0x05$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
```

## 9. strcpy

Prototype: `char *_strcpy(char *dest, char *src);`
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

```bash
julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 
```

## 10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers

Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

```bash
julien@ubuntu:~/0x05$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$ 
```

## 11. Don't hate the hacker, hate the code

Create a program that generates random valid passwords for the program 101-crackme.

You are allowed to use the standard library
You don’t have to pass the betty-style tests (you still need to pass the betty-doc tests)
man srand, rand, time
gdb and objdump can help
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra 101-keygen.c -o 101-keygen

```bash
julien@ubuntu:~/0x05$ ./101-crackme "`./101-keygen`"
Tada! Congrats
julien@ubuntu:~/0x05$ 
```

## how to solve this problem

[youtube](https://www.youtube.com/watch?v=IjLlHgxZocA)

from assembly code we can see that the program is checking for the password

```bash
julien@ubuntu:~/0x05$ objdump -d -j .text -M intel ./101-crackme

101-crackme:     file format elf64-x86-64


Disassembly of section .text:

0000000000400470 <_start>:
  400470:       31 ed                   xor    ebp,ebp
  400472:       49 89 d1                mov    r9,rdx
  400475:       5e                      pop    rsi
  400476:       48 89 e2                mov    rdx,rsp
  400479:       48 83 e4 f0             and    rsp,0xfffffffffffffff0
  40047d:       50                      push   rax
  40047e:       54                      push   rsp
  40047f:       49 c7 c0 90 06 40 00    mov    r8,0x400690
  400486:       48 c7 c1 20 06 40 00    mov    rcx,0x400620
  40048d:       48 c7 c7 9d 05 40 00    mov    rdi,0x40059d
  400494:       e8 b7 ff ff ff          call   400450 <__libc_start_main@plt>
  400499:       f4                      hlt    
  40049a:       66 0f 1f 44 00 00       nop    WORD PTR [rax+rax*1+0x0]

00000000004004a0 <deregister_tm_clones>:
  4004a0:       b8 47 10 60 00          mov    eax,0x601047
  4004a5:       55                      push   rbp
  4004a6:       48 2d 40 10 60 00       sub    rax,0x601040
  4004ac:       48 83 f8 0e             cmp    rax,0xe
  4004b0:       48 89 e5                mov    rbp,rsp
  4004b3:       76 1b                   jbe    4004d0 <deregister_tm_clones+0x30>
  4004b5:       b8 00 00 00 00          mov    eax,0x0
  4004ba:       48 85 c0                test   rax,rax
  4004bd:       74 11                   je     4004d0 <deregister_tm_clones+0x30>
  4004bf:       5d                      pop    rbp
  4004c0:       bf 40 10 60 00          mov    edi,0x601040
  4004c5:       ff e0                   jmp    rax
  4004c7:       66 0f 1f 84 00 00 00    nop    WORD PTR [rax+rax*1+0x0]
  4004ce:       00 00 
  4004d0:       5d                      pop    rbp
  4004d1:       c3                      ret    
  4004d2:       0f 1f 40 00             nop    DWORD PTR [rax+0x0]
  4004d6:       66 2e 0f 1f 84 00 00    nop    WORD PTR cs:[rax+rax*1+0x0]
  4004dd:       00 00 00 

00000000004004e0 <register_tm_clones>:
  4004e0:       be 40 10 60 00          mov    esi,0x601040
  4004e5:       55                      push   rbp
  4004e6:       48 81 ee 40 10 60 00    sub    rsi,0x601040
  4004ed:       48 c1 fe 03             sar    rsi,0x3
  4004f1:       48 89 e5                mov    rbp,rsp
  4004f4:       48 89 f0                mov    rax,rsi
  4004f7:       48 c1 e8 3f             shr    rax,0x3f
  4004fb:       48 01 c6                add    rsi,rax
  4004fe:       48 d1 fe                sar    rsi,1
  400501:       74 15                   je     400518 <register_tm_clones+0x38>
  400503:       b8 00 00 00 00          mov    eax,0x0
  400508:       48 85 c0                test   rax,rax
  40050b:       74 0b                   je     400518 <register_tm_clones+0x38>
  40050d:       5d                      pop    rbp
  40050e:       bf 40 10 60 00          mov    edi,0x601040
  400513:       ff e0                   jmp    rax
  400515:       0f 1f 00                nop    DWORD PTR [rax]
  400518:       5d                      pop    rbp
  400519:       c3                      ret    
  40051a:       66 0f 1f 44 00 00       nop    WORD PTR [rax+rax*1+0x0]

0000000000400520 <__do_global_dtors_aux>:
  400520:       80 3d 19 0b 20 00 00    cmp    BYTE PTR [rip+0x200b19],0x0        # 601040 <__TMC_END__>
  400527:       75 11                   jne    40053a <__do_global_dtors_aux+0x1a>
  400529:       55                      push   rbp
  40052a:       48 89 e5                mov    rbp,rsp
  40052d:       e8 6e ff ff ff          call   4004a0 <deregister_tm_clones>
  400532:       5d                      pop    rbp
  400533:       c6 05 06 0b 20 00 01    mov    BYTE PTR [rip+0x200b06],0x1        # 601040 <__TMC_END__>
  40053a:       f3 c3                   repz ret 
  40053c:       0f 1f 40 00             nop    DWORD PTR [rax+0x0]

0000000000400540 <frame_dummy>:
  400540:       bf 20 0e 60 00          mov    edi,0x600e20
  400545:       48 83 3f 00             cmp    QWORD PTR [rdi],0x0
  400549:       75 05                   jne    400550 <frame_dummy+0x10>
  40054b:       eb 93                   jmp    4004e0 <register_tm_clones>
  40054d:       0f 1f 00                nop    DWORD PTR [rax]
  400550:       b8 00 00 00 00          mov    eax,0x0
  400555:       48 85 c0                test   rax,rax
  400558:       74 f1                   je     40054b <frame_dummy+0xb>
  40055a:       55                      push   rbp
  40055b:       48 89 e5                mov    rbp,rsp
  40055e:       ff d0                   call   rax
  400560:       5d                      pop    rbp
  400561:       e9 7a ff ff ff          jmp    4004e0 <register_tm_clones>

0000000000400566 <checksum>:
  400566:       55                      push   rbp
  400567:       48 89 e5                mov    rbp,rsp
  40056a:       48 89 7d e8             mov    QWORD PTR [rbp-0x18],rdi
  40056e:       48 c7 45 f8 00 00 00    mov    QWORD PTR [rbp-0x8],0x0
  400575:       00 
  400576:       eb 14                   jmp    40058c <checksum+0x26>
  400578:       48 8b 45 e8             mov    rax,QWORD PTR [rbp-0x18]
  40057c:       0f b6 00                movzx  eax,BYTE PTR [rax]
  40057f:       48 0f be c0             movsx  rax,al
  400583:       48 01 45 f8             add    QWORD PTR [rbp-0x8],rax
  400587:       48 83 45 e8 01          add    QWORD PTR [rbp-0x18],0x1
  40058c:       48 8b 45 e8             mov    rax,QWORD PTR [rbp-0x18]
  400590:       0f b6 00                movzx  eax,BYTE PTR [rax]
  400593:       84 c0                   test   al,al
  400595:       75 e1                   jne    400578 <checksum+0x12>
  400597:       48 8b 45 f8             mov    rax,QWORD PTR [rbp-0x8]
  40059b:       5d                      pop    rbp
  40059c:       c3                      ret    

000000000040059d <main>:
  40059d:       55                      push   rbp
  40059e:       48 89 e5                mov    rbp,rsp
  4005a1:       48 83 ec 20             sub    rsp,0x20
  4005a5:       89 7d ec                mov    DWORD PTR [rbp-0x14],edi
  4005a8:       48 89 75 e0             mov    QWORD PTR [rbp-0x20],rsi
  4005ac:       83 7d ec 02             cmp    DWORD PTR [rbp-0x14],0x2
  4005b0:       74 20                   je     4005d2 <main+0x35>
  4005b2:       48 8b 45 e0             mov    rax,QWORD PTR [rbp-0x20]
  4005b6:       48 8b 00                mov    rax,QWORD PTR [rax]
  4005b9:       48 89 c6                mov    rsi,rax
  4005bc:       bf a4 06 40 00          mov    edi,0x4006a4
  4005c1:       b8 00 00 00 00          mov    eax,0x0
  4005c6:       e8 75 fe ff ff          call   400440 <printf@plt>
  4005cb:       b8 01 00 00 00          mov    eax,0x1
  4005d0:       eb 41                   jmp    400613 <main+0x76>
  4005d2:       48 8b 45 e0             mov    rax,QWORD PTR [rbp-0x20]
  4005d6:       48 83 c0 08             add    rax,0x8
  4005da:       48 8b 00                mov    rax,QWORD PTR [rax]
  4005dd:       48 89 c7                mov    rdi,rax
  4005e0:       e8 81 ff ff ff          call   400566 <checksum>
  4005e5:       48 89 45 f8             mov    QWORD PTR [rbp-0x8],rax
  4005e9:       48 81 7d f8 d4 0a 00    cmp    QWORD PTR [rbp-0x8],0xad4
  4005f0:       00 
  4005f1:       74 11                   je     400604 <main+0x67>
  4005f3:       bf b8 06 40 00          mov    edi,0x4006b8
  4005f8:       e8 33 fe ff ff          call   400430 <puts@plt>
  4005fd:       b8 01 00 00 00          mov    eax,0x1
  400602:       eb 0f                   jmp    400613 <main+0x76>
  400604:       bf c7 06 40 00          mov    edi,0x4006c7
  400609:       e8 22 fe ff ff          call   400430 <puts@plt>
  40060e:       b8 00 00 00 00          mov    eax,0x0
  400613:       c9                      leave  
  400614:       c3                      ret    
  400615:       66 2e 0f 1f 84 00 00    nop    WORD PTR cs:[rax+rax*1+0x0]
  40061c:       00 00 00 
  40061f:       90                      nop

0000000000400620 <__libc_csu_init>:
  400620:       41 57                   push   r15
  400622:       41 56                   push   r14
  400624:       41 89 ff                mov    r15d,edi
  400627:       41 55                   push   r13
  400629:       41 54                   push   r12
  40062b:       4c 8d 25 de 07 20 00    lea    r12,[rip+0x2007de]        # 600e10 <__frame_dummy_init_array_entry>
  400632:       55                      push   rbp
  400633:       48 8d 2d de 07 20 00    lea    rbp,[rip+0x2007de]        # 600e18 <__do_global_dtors_aux_fini_array_entry>
  40063a:       53                      push   rbx
  40063b:       49 89 f6                mov    r14,rsi
  40063e:       49 89 d5                mov    r13,rdx
  400641:       4c 29 e5                sub    rbp,r12
  400644:       48 83 ec 08             sub    rsp,0x8
  400648:       48 c1 fd 03             sar    rbp,0x3
  40064c:       e8 af fd ff ff          call   400400 <_init>
  400651:       48 85 ed                test   rbp,rbp
  400654:       74 20                   je     400676 <__libc_csu_init+0x56>
  400656:       31 db                   xor    ebx,ebx
  400658:       0f 1f 84 00 00 00 00    nop    DWORD PTR [rax+rax*1+0x0]
  40065f:       00 
  400660:       4c 89 ea                mov    rdx,r13
  400663:       4c 89 f6                mov    rsi,r14
  400666:       44 89 ff                mov    edi,r15d
  400669:       41 ff 14 dc             call   QWORD PTR [r12+rbx*8]
  40066d:       48 83 c3 01             add    rbx,0x1
  400671:       48 39 eb                cmp    rbx,rbp
  400674:       75 ea                   jne    400660 <__libc_csu_init+0x40>
  400676:       48 83 c4 08             add    rsp,0x8
  40067a:       5b                      pop    rbx
  40067b:       5d                      pop    rbp
  40067c:       41 5c                   pop    r12
  40067e:       41 5d                   pop    r13
  400680:       41 5e                   pop    r14
  400682:       41 5f                   pop    r15
  400684:       c3                      ret    
  400685:       90                      nop
  400686:       66 2e 0f 1f 84 00 00    nop    WORD PTR cs:[rax+rax*1+0x0]
  40068d:       00 00 00 

0000000000400690 <__libc_csu_fini>:
  400690:       f3 c3                   repz ret 
```

he is adding the ascii value of the character to the checksum.

So we need to find a way to make the checksum equal to 0xad4.
which is 2772 in decimal.
