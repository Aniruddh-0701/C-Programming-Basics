---
title: Arrays in C Programming
subtitle: Arrays in C Programming
image: ../C.png
prev: arrays.html
next: ""
---

# Arrays in C Programming

[TOC]

## Passing arrays as Function Arguments

Arrays can passed as arguments in following ways:

1. As sized array
2. As un-sized array
3. As pointers (Discussed under `Pointers for arrays`)

### 1. Parameter as sized array

**Syntax:**

```c
<return_type> functionName(parameters, ..., <type> paramName[size]) {
    // body
}
```

Eg:

```c
void myFunction(int param[10]) {
   .
   .
   .
}
```

### 2. Parameter as un-sized array

**Syntax:**

```c
<return_type> functionName(parameters, ..., <type> paramName[]) {
    // body
}
```

Eg:

```c
void myFunction(int param[]) {
   .
   .
   .
}
```

Consider the function `getAverage`, which takes an array as an argument along with another argument. Based on the passed arguments, it returns the average of the numbers passed through the array.

```c
#include <stdio.h>

double getAverage(int arr[], int size);

int main() {

    /* an int array with 5 elements */
    int balance[5] = {1000, 2, 3, 17, 50};
    double avg;

    /* Passing array parameter */
    avg = getAverage(balance, 5);

    /* output the returned value */
    printf("Average value is: %lf\n", avg);

    return 0;
}

double getAverage(int arr[], int size) {

    int i;
    double avg;
    double sum = 0;

    for (i = 0; i < size; ++i)
        sum += arr[i];

    avg = sum / size;

    return avg;
}

```

**Output:**

```txt
Average value is: 214.400000
```

## Multi-dimensional Arrays and matrices
