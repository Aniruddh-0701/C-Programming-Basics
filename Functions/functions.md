---
title: Functions in C Programming
subtitle: Functions in C Programming
image: ../C.png
prev: indefinite_loops.html
next: ""
---

# Functions in C Programming

[TOC]

## Introduction

Function is a set of organized lines of code that performs a specific, well defined task.

It is used reduce the number of lines of code and improve reusability, mainly applying on `DRY` principle - _Don't Repeat Yourself_.

Syntax:

```c
<return_type> functionName(<type> parameter1, <type> parameter2, ...) {
    // statements - body of the function
    return ...; // Optional
}
```

<ul>
<li><code>return_type</code>:<br>
A function may return a value. The <b>return_type</b> is the <i>data type</i> of the value the function returns. Some functions perform the desired operations without returning a value. In this case, the return_type is the keyword <code>void</code>.</li>

<li><code>function_name</code>:<br>This is the actual name of the function. The function name and the parameter list together constitute the function signature. Used to call it later.</li>

<li><code>&lt;type&gt; parameter</code>: <br> A parameter is like a placeholder. When a function is invoked, you pass a value to the parameter. This value is referred to as actual parameter or argument. The parameter list refers to the type (<code>&lt;type&gt;</code>), order, and number of the parameters of a function. Parameters are optional in definition.</li>

<li><b>Function body</b>: <br>The function body contains a collection of statements that define what the function does</li>

<li><code>return</code>: <br>
The <code>return</code> statement is used to return the desired value from the function. The execution of the function ends and exits function to return to the function call</li>
</ul>

Every C program has at least one function, which is `main()`, and all the most trivial programs can define additional functions.

### `return` statement

The <code>return</code> statement is used to return the desired value from the function. The execution of the function ends and exits function to return to the function call

**Syntax:**

```c
return <value / variable>;
```

Eg:

```c
/* function returning the min between two numbers */
int min(int num1, int num2) {

    /* local variable declaration */
    int result;

    if (num1 < num2)
        result = num1;
    else
        result = num2;

    return result;
}
```

Since, the execution ends on reach of `return` statement, the above code can be rewritten as:

```c
/* function returning the min between two numbers */
int min(int num1, int num2) {

    if (num1 < num2)
        return num1;

    return num2;
}
```

> **Fruitful function:** A fruitful function is a function that returns a value

## Function Declarations

A function declaration tells the compiler about a function name and how to call the function. The actual body of the function can be defined separately.

**Syntax:**

```c
<return_type> function_name( parameter list );
```

Consider the function above, its declaration is:

```c
int min(int num1, int num2);
```

Parameter names are not important in function declaration. Only their type is required, so the following is also a valid declaration −

```c
int min(int, int);
```

Function declaration is required when you define a function in one source file and you call that function in another file, or when you implement or define the function after `main()` function. In such cases, you should declare the function at the top (above `main()`) of the file calling the function.

## Function Call

To use a function defined as above, you need to use a function call.

**Syntax:**

```c
function_name(<values_to_pass>);
```

When a program calls a function, the program control is transferred to the called function. A called function performs a defined task and when its return statement is executed or when its function-ending closing brace is reached, it returns the program control back to the main program.

To call a function, you simply need to pass the required parameters along with the function name, and if the function returns a value, then you can store the returned value.

```c
#include <stdio.h>

/* function declaration */
int min(int num1, int num2);

int main () {

    /* local variable definition */
    int a = 100;
    int b = 200;
    int ret;

    /* calling a function to get min value */
    ret = min(a, b);

    printf( "Min value is : %d\n", ret );

    return 0;
}

/* function returning the min between two numbers */
int min(int num1, int num2) {

    /* local variable declaration */
    int result;

    if (num1 < num2)
        return num1;

    return num2;
}
```

output

```txt
Min value is : 100
```

### Function Arguments

If a function needs arguments, it must declare variables that accept the values of the arguments. These variables are called the **formal parameters of the function**.

> Formal parameters behave like other local variables inside the function and are created upon entry into the function and destroyed upon exit.

While calling a function, there are two ways in which arguments can be passed to a function:

1. Call by Value
2. Call by reference

**1. Call by value:**

This method copies the actual value of an argument into the formal parameter of the function. In this case, changes made to the parameter inside the function have no effect on the argument (variable that is passed).

> By default, **`C`** uses call by value to pass arguments.

In general, it means the code within a function cannot alter the arguments used to call the function.

**2. Call by reference:**

This method **copies the address** of an argument into the formal parameter. Inside the function, the address is used to access the actual argument used in the call. This means that changes made to the parameter affect the argument.

> `Call by reference` will be discussed in detail later under pointers.

## Scope of Variable

A `scope` in any programming is a region of the program where a defined variable can have its existence and beyond that, it cannot be accessed. There are three places where variables can be declared in C programming language −

<ul>
<li>Inside a function or a block which is called local variables.</li>

<li>Outside of all functions which is called global variables.</li>

<li>In the definition of function parameters which are called formal parameters.</li>

</ul>

### Local Variables

Variables that are declared inside a function or block are called **local variables**. They can be used only by statements that are inside that function or block of code. Local variables are not known to functions outside their own.

Eg:

```c
#include <stdio.h>

int main () {
    /* local variable declaration inside main */
    int a, b;
    int c;

    /* actual initialization */
    a = 10;
    b = 20;
    c = a + b;

    printf ("value of a = %d, b = %d and c = %d\n", a, b, c);

    return 0;
}
```

### Global Variables

**Global variables** are defined outside a function, usually on top of the program. Global variables hold their values throughout the lifetime of your program and they can be accessed inside any of the functions defined for the program.

A global variable can be accessed by any function, i.e., a global variable is available for use throughout the entire program after its declaration.

Eg:

```c
#include <stdio.h>

/* global variable declaration */
int g;

int main () {

    /* local variable declaration */
    int a, b;

    /* actual initialization */
    a = 10;
    b = 20;
    g = a + b;

    printf ("value of a = %d, b = %d and g = %d\n", a, b, g);

    return 0;
}
```

A program can have same name for local and global variables but the value of local variable inside a function will take preference.

Eg:

```c
#include <stdio.h>

/* global variable declaration */
int g = 20;

int main () {

    /* local variable declaration */
    int g = 10;

    printf ("value of g = %d\n", g);

    return 0;
}
```

Output:

```txt
value of g = 10
```

### Formal Parameters

Formal parameters, are treated as local variables with-in a function and they take precedence over global variables.

Eg:

```c
#include <stdio.h>

/* global variable declaration */
int a = 20;

int main () {

    /* local variable declaration in main function */
    int a = 10;
    int b = 20;
    int c = 0;

    printf ("value of a in main() = %d\n", a);
    c = sum( a, b);
    printf ("value of c in main() = %d\n", c);

    return 0;
}

/* function to add two integers */
int sum(int a, int b) {

    printf ("value of a in sum() = %d\n", a);
    printf ("value of b in sum() = %d\n", b);

    return a + b;
}
```

Output:

```txt
value of a in main() = 10
value of a in sum() = 10
value of b in sum() = 20
value of c in main() = 30
```

### Initializing Local and Global Variables

When a local variable is defined, it is not initialized by the system. Global variables are initialized automatically by the system when you define them.

| Data Type | Initial Default Value |
| --------- | --------------------- |
| int       | 0                     |
| char      | '\0'                  |
| float     | 0                     |
| double    | 0                     |
| pointer   | NULL                  |

It is a good programming practice to initialize variables properly, otherwise your program may produce unexpected results, because uninitialized variables will take some garbage value already available at their allocated memory location.

---
