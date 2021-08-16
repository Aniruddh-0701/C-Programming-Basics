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

### 2. Parameter as sized array

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

## Multi-dimensional Arrays and matrices
