#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a = 2, b = 3;
    // printf("Increment: %d\n", ++a);
    // printf("%d", a);
    // printf("Decrement: %d\n", --a);
    // printf("%d", a);
    printf("%d", a!=b);
    return 0;
}

// a++ or ++a => a = a+1
// a-- or a-- => a = a-1

// 1 + 2 * 3 / 3 = 3 - Infix

// 1 2 3 3 / * + - Post fix
// 1 2 1 * +
// 1 2 +
// 3

// + 1 * 2 / 3 3 - Pre fix
// + 1 * 2 1      
// + 1 2
// 3

// CR LF - \r\n