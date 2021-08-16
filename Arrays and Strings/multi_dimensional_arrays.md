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

---

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

---

## Multi-dimensional Arrays and matrices

Multi-dimensional arrays, in general, are arrays of arrays, can be visualized as tables.

### Dimension

Dimension of a multi-dimensional array is the levels of arrays present in it.

1. **One dimensional** or **Single dimensional** array is an array of non-array elements.
2. **Two dimensional** array is an array of arrays.
3. **Three dimensional** array is an array of arrays of arrays.

Only 1D and 2D are in common use while at some cases, Higher dimensions may be used.

> 2D arrays are nothing but matrices, where each child array is a row

---

### Declaration and Initialization

#### Declaration

Arrays can be declared by defining the size of each dimension

**Syntax:**

```c
// for N dimension
<type> arrayName[size1][size2]...[sizeN];
```

---

#### Initialization

Arrays can be declared in two ways:

1. Nesting with curly braces
2. Direct initialization

**Eg:** 2D arrays

_1. Nesting with curly braces:_

```c
int a[][4] = {
   {0, 3, 6, 9},   /*  initializers for row indexed by 0 */
   {1, 4, 7, 10},   /*  initializers for row indexed by 1 */
   {2, 5, 8, 11}   /*  initializers for row indexed by 2 */
};
```

_2. Direct initialization:_

```c
int a[3][4] = {0,1,2,3,4,5,6,7,8,9,10,11};
```

The above initialization automatically assigns the values to child arrays as per given size.

> The sizes of `last` dimension is **mandatory**, other dimensions are optional

---

### Accessing elements

A specific child array/ element can be accessed by specifying the correct indices of values.

**Eg:**

Consider the array $b$,

```c
int b[4][4] = {
    {0, 1, 2, 3},
    {4, 5, 6, 7},
    {8, 9, 10, 11},
    {12, 13, 14, 15}
};
```

Let's right it as a matrix for easy visualization

$$
b = \begin{bmatrix}
0 & 1 & 2 & 3\\\\
4 & 5 & 5 & 7\\\\
8 & 9 & 10 & 11\\\\
12 & 13 & 14 & 15\\\\
\end{bmatrix}_{4 \times 4}
$$

To get `10`, the position is $(3, 3)$. The indices are obtained by subtracting each level by 1, giving $(2, 2)$.

```c
int val = b[2][2];
// val is set to 10
```

In the same way, a specific element may be modified.
