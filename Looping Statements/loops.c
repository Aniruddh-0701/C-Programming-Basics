/*
for

syntax: for(init; condn; incre/decre) only for finite looping

while  runs till condition true 
while (condition) Infinite looping or custom condition check and start

do-while
do{

}while(condition) do and check
*/

#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n, i=1, sum=0;
    printf("Enter a number");
    scanf("%d", &n);

    do{
        sum += i++;
    }while(i<=n);
    
    printf("Sum of %d natural numbers is %d", n, sum);
    return 0;
}
