# Introduction to C - Part 3

## Limits and Memory for various Data Types

| Data type              | Minimum              | Maximum                                        | Memory (in bytes) |
| ---------------------- | -------------------- | ---------------------------------------------- | ----------------- |
| char                   | -128                 | 127                                            | 1                 |
| unsigned char          | 0                    | 255                                            | 1                 |
| int                    | -2147483648          | 2147483647                                     | 4                 |
| short int              | -32768               | 32767                                          | 2                 |
| long int               | -2147483648          | 2147483647                                     | 4                 |
| long long int          | -9223372036854775808 | 9223372036854775807                            | 8                 |
| unsigned int           | 0                    | 4294967295                                     | 4                 |
| unsigned short int     | 0                    | 65535                                          | 2                 |
| unsigned long int      | 0                    | 4294967295                                     | 4                 |
| unsigned long long int | 0                    | 18446744073709551615                           | 8                 |
| float                  | 0                    | 340282346638528860000000000000000000000.000000 | 4                 |
| double                 | 0                    | 17976931348623157000...(289 more 0s).000000    | 8                 |

---

### Custom printing and output formatting

`printf` is prints out whatever format we provide. This helps us use custom formatting.

For example, Consider the below code, that gets two numbers and prints their sum.

```c
// Program to find sum of two numbers
#include<stdio.h>

int main(){
    int num1, num2, sum;

    printf("Enter first number ");
    scanf("%d", &num1);

    printf("Enter second number ");
    scanf("%d", &num2);

    sum = num1 + num2;
    printf("Sum of the numbers %d and %d is %d\n", num1, num2, sum);

    return 0;
}
```

What you get in your screen, on execution, providing the input, is:

```txt
Enter first number 10
Enter second number 20
Sum of the numbers 10 and 20 is 30

```

Note the last line of output, you have the output formatted so that it is easy to read. This way is the basic output formatting

You can also format the output of computed values stored in variables. These are done by modifying the format specifier as stated below:

- A minus symbol (`-`) sign tells left alignment

- A number after `%` specifies the minimum field width. If string is less than the width, it will be filled with spaces

- A period (`.`) is used to separate field width and precision

The below example uses an string (`char` array) of name str. More details on them will be discussed later.

**1. String Formatting:**

```c
// string formatting
#include <stdio.h>

int main() {
    char str[] = "Hello World";

    printf("%s\n", str);

    // shift to the right 20 characters including the string
    printf("%20s\n", str);

    printf("%-20s\n", str); // left align

    // shift to the right 20 characters including the string, and print string
    // up to 5 character
    printf("%20.5s\n", str);

    // left align and print string up to 5 character
    printf("%-20.5s\n", str);

    return 0;
}
```

Output

```txt
Hello World
         Hello World
Hello World
               Hello
Hello
```

**2. Float formatting:**

```c
// float formatting
#include <stdio.h>

int main() {
    float f = 12.666667;

    printf("%f\n", f);

    // setting width
    printf("%10f\n", f);

    // setting width and aligning left
    printf("%-10f\n", f);

    // setting width and padding with zeroes
    printf("%015f\n", f);

    // setting precision
    printf("%.2f\n", f);

    // setting width and precision
    printf("%10.2f\n", f);

    // setting width and precision
    printf("%10.2f\n", f);

    // setting width and precision with padding zeroes
    printf("%015.7f\n", f);

    return 0;
}
```

Output

```txt
12.666667
 12.666667
12.666667
00000012.666667
12.67
     12.67
     12.67
0000012.6666670
```

**3. Integer formatting:**

```c
// integer formatting
#include <stdio.h>

int main() {
    int a = 126;

    printf("%d\n", a);

    // setting width
    printf("%5d\n", a);

    // setting width and aligning to the left
    printf("%-5d\n", a);

    // setting width and padding with zeroes
    printf("%05d\n", a);

    return 0;
}
```

Output

```txt
126
  126
126
00126
```

---

[Prev](<Intro_to_C(2).md>)
