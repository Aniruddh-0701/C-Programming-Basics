#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a; // Declare
    float b;
    printf("Enter a two numbers\n"); // Asking user to enter a number
    scanf("%d%f", &a, &b); // %d - integer, store it to a, &a - gets address of 'a'
    printf("Numbers entered are %d and %f", a, b); // printing the number
    return 0;
}

/*
Getting a number from user, printing it back
*/
