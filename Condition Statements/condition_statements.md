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

Checks for truth of the second if (`else if`) statement when if statement fails, chain of `if`-`else`.

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
    int x;

    printf("Enter a number");
    scanf("%d", &x);

    if (x < 10) {
        printf("The number %d is small", x);
    } else if (10 <= x <= 20) {
        printf("The number %d is in range", x);
    } else {
        printf("The number %d is big", x);
    }
    return 0;
}
```

The above code gets a number `x` and decides the output based on the following:

$$
\rm{Output} =
\begin{cases}
\text{small}, ~~~~~~~\rm{if}~ x \lt 10\\\\
\text{in range}, ~~\rm{if}~10 \le x \le 20\\\\
\text{big}, ~~~~~~~~~~~\rm{otherwise}
\end{cases}
$$

### 4. Nested `if` - `else` statement

`if else` within another `if else` statement is _nested if else_. In general all nested conditions come under this category.

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

The below code gets a number `n` and decides the output based on the following:

$$
\rm{Output} =
\begin{cases}
\text{small even}, ~~~~~~~\rm{if}~ 0 \le n \lt 10 ~\text{and n is even}\\\\
\text{small odd}, ~~~~~~~~\rm{if}~ 0 \le n \lt 10 ~\text{and n is odd}\\\\
\text{in range}, ~~~~~~~~~~~\rm{if}~10 \le x \lt 20\\\\
\text{not in range}, ~~~~~~~~~~~\rm{otherwise}
\end{cases}
$$

```c
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    if(0 <= n < 10){
        if (n % 2 == 0) { // Checks if even
            printf("The number %d is small even", n);
        } else { // if not even
            printf("The number %d is small odd", n);
        }
    } else if (10 <= n < 20) {
        printf("The number %d is in range", n);
    } else{
        printf("The number %d is not in range", n);
    }
    return 0;
}
```

### 5. Ternary (`?`) Operator

One liner of if else statements. Used for small decision making when such structure is too big.

**Syntax:**

```c
condition? statement1: statement2;
```

If the conditional expression is `true`, the Statement1 is executed or considered, otherwise, statement2 is considered.

Eg:

Consider the below code that outputs if a number is even or odd.

A number is `even` if its remainder ( `%` ) when divided by `2` is zero

$$
\rm{Output} =
\begin{cases}
\text{even}, ~~~~~~~\rm{if}~~{n~mod ~2} \rightarrow 0\\\\
\text{odd}, ~~~~~~~~~~~\rm{otherwise}
\end{cases}
$$

> `mod` operation ( `%` ) yields the reminder of the division. Check operators in Introduction to C - Part 2

```c
#include<stdio.h>

int main(){
    int n;
    printf("Enter a number");
    scanf("%d", &n);
    printf((n % 2 == 0)? "Even": "Odd");
    return 0;
}
```

> It should be used only for a simple `if` - `else` condition.
