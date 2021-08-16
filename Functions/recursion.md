---
title: Recursion in C Programming
subtitle: Recursive Functions in C Programming
image: ../C.png
prev: functions.html
next: arrays.html
---

# Functions in C Programming

[TOC]

## Introduction to Recursion

**Recursion** is a method of solving a problem where the solution depends on solutions to smaller instances of the same problem.

---

### Recursive function

A function that performs recursion.

A recursive function calls itself repeatedly by dividing the problem into sub problems until the solution is obtainable for the smallest sub-problem.

**Syntax:**

```c
<return_type> functionName(<type> parameter1, <type> parameter2, ...) {
    if (condition) {
        // statements - base case (end of recursion)
        return ...;
    } else {
        functionName(parameter_list); // recursive call
        return ...;
    }
}
```

The **base case** the condition at which recursion stops breaking down the problem. The **recursive case** defines what to be done for recursion.

> The **base case** is mandatory. If not provided, recursion may continue indefinitely.

**Eg:**

The most common example is a recursive function to find factorial of a number

```c
#include <stdio.h>

int factorial(int n) {
    if (n == 1) {
        return n; // base case
    } else {
        return n * factorial(n - 1);
    }
}

int main() {
    int n = 6;
    printf("Factorial of %d is %d", n, factorial(n));
}
```

The program works on the concept: $n! = n(n-1)!$

**Output:**

```txt
Factorial of 6 is 720
```

Explanation

```txt
n = 6
n == 1 false
6 * factorial(5)

n = 5
n == 1 false
5 * factorial(4)

n = 4
n == 1 false
4 * factorial(3)

n = 3
n == 1 false
3 * factorial(2)

n = 2
n == 1 false
2 * factorial(1)

n = 1
n == 1 True
1

Building up:

1
2 * 1
3 * 2 * 1
4 * 3 * 2 * 1
5 * 4 * 3 * 2 * 1
6 * 5 * 4 * 3 * 2 * 1

720
```

---

A visual explanation is provided by modifying the above program as below:

```c
#include <stdio.h>
#include <string.h>

int factorial(int n, char indent[]) {
    printf("%s%d\n", indent, n);
    if (n == 1)
        return 1;
    else {
        char s1[100];
        strcpy(s1, indent);
        strcat(s1, "|\t");
        int fac = n * factorial(n - 1, s1);
        printf("%s%d\n", indent, fac);
        return fac;
    }
}

int main() {
    int n = 6;
    char s[100] = {'\0'};
    factorial(n, s);
}
```

**Output:**
The `|` line indicates the same level of recursive call

```txt
6
|    5
|    |    4
|    |    |    3
|    |    |    |    2
|    |    |    |    |    1
|    |    |    |    2
|    |    |    6
|    |    24
|    120
720
```

> The usage of string in indentation part shall be discussed later

---

**Types of Recursion:**

1. Head recursion
2. Tail recursion
3. Tree recursion
4. Nested recursion
5. Indirect recursion

---
