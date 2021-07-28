---
title: Conditional Statements in C
subtitle: Conditional statements
image: ../C.png
prev: Intro_to_C(3).html
next: ""
---

# Conditional Statements

**Condition statements** or **Control flow statements** or **Decision Control Statements** are statements that are used to control the flow or execution of a program. The flow is controlled the values of few variables that decide the proceedings of a program.

The conditions statements have same basic structure in all programming languages. The list of Control statements are:

1. `if` statement
2. `if` - `else` statements
3. `if` - `else if` - `else` statements
4. Nested `if` - `else` statements
5. Conditional check by ternary (`?`) operator

> The result of expression used to make decision should always result in any of the boolean values (`true` or `false`)

### 1. `if` statement

Executes the statements inside the block only if the condition is satisfied.

> A block is a section of code that is enclosed within the curly braces `{}`

**Syntax:**

```c
if (condition)
{
    // Statements
}
```

Eg:

```c
#include<stdio.h>

int main(){
    int x = 14, y = 18;
    if (y > x) {
        printf("%d", y);
    }
}
```

The above program will print `y` as the conditional expression `y > x` results in `true`

### 2. `if - else` statement

Executes the statements inside the `if` block only if the condition is satisfied. Otherwise, the `else` block is executed.

**Syntax:**

```c
if (condition)
{
    // Statements
}
else
{
    // Statements
}
```

Eg:

```c
#include<stdio.h>

int main(){
    int x = 19, y = 18;
    if (y > x) {
        printf("%d", y);
    }
    else
    {
        printf("%d", x);
    }
}
```

The above program will print `x` as the conditional expression `y > x` results in `false`

### 3. `if` - `else if` - `else` statement

**Syntax:**

```c
if (condition1)
{
    // Statements
}
else if (condition2)
{
    // Statements
}
else
{
    // Statements
}
```

Eg:

```c
#include<stdio.h>

int main(){
    // Yet to fill the example
    return 0;
}
```

### 4. Nested `if` - `else` statement

**Syntax:**

```c
if (condition1)
{
    if (condition2)
    {
        // Statements
    }
    else
    {
        // Statements
    }
}
else
{
    if (condition)
    {
        // Statements
    }
    else
    {
        // Statements
    }
}
```

> The nesting need not be always in both the blocks. One of them may not contain such nesting and nesting may also be to the next level or multiple nesting may be found.

Eg:

```c
#include<stdio.h>

int main(){
    // Yet to fill the example
    return 0;
}
```

### 5. Ternary (`?`) Operator

**Syntax:**

```c
condition? statement1: statement2;
```

Eg:

```c
#include<stdio.h>

int main(){
    // Yet to fill the example
    return 0;
}
```

> It should be used only for a simple `if` - `else` condition.
