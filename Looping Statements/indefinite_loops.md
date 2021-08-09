---
title: Looping Statements in C - Part 2
subtitle: Looping Statements in C - Part 2/2
image: ../C.png
prev: loops.html
next: functions.html
---

# Looping Statements

[TOC]

### 2. `while` loop

`while` is most commonly used for indefinite looping. Preferred for variable conditions.

**Syntax:**

```c
while (condition) {
    // statements
}
```

The `while` loop follows the basic syntax of `if` statement. When the conditional expression is true, the loop executes an iteration.

Eg:

```c
#include <stdio.h>

int main() {
    int i = 1;
    while (i <= 10){
        printf("%d ", i++);
        // The incrementation will cause the loop termination change
    }
    return 0;
}
```

> The `while` loop should definitely contain an expression that will cause the termination of loop sooner or later.

---

### 3. `do...while` loop

The `do...while` looping is yet another looping statement that is used in indefinite cases. It works similar to the `while` loop where truthfulness of a conditional expression decides the flow.

**Syntax:**

```c
do {
    // statements
} while(condition);
```

Eg:

```c
#include <stdio.h>

int main() {
    int i = 1;
    do {
        printf("%d ", i++);
        // The incrementation will cause the loop termination change
    } while (i <= 10);
    return 0;
}
```

---

#### Indefinite looping using `while`

Consider the problem:

```txt
Given a number 'n', find the number of steps taken to reach 1 using the following function:
```

$$
\displaystyle
n =
\begin{cases}
n/2, ~~~~~~~~~~~~\rm{if}~ n~ \text{is even}\\\\
3 \times n + 1, ~~ \rm{if}~n~ \text{is odd}
\end{cases}
$$

Here, the number of steps it takes to reach `1` is not clear (indefinite).
It is implemented using `while` loop as below:

```c
#include <stdio.h>

int main() {
    int n, steps = 0; // steps variable to count number of steps taken
    printf("Enter n ");
    scanf("%d", &n); // getting n
    while (n != 1) {
        ++steps;
        if (n % 2 == 0) {
            // if n is even
            n /= 2;
        } else {
            n = (3 * n) + 1;
        }
    }
    printf("Steps taken = %d", steps);
    return 0;
}
```

<ol>
<li>Case 1:
<br><br>
Input: <code>10</code><br>
Output: <code>Steps taken = 6</code><br>

Path: $10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$

</li>
<li> Case 2:
<br><br>
Input: <code>11</code><br>
Output: <code>Steps taken = 14</code><br>

Path: $11 \rightarrow 34 \rightarrow 17 \rightarrow 52 \rightarrow 26 \rightarrow 13 \rightarrow 40 \rightarrow 20 \rightarrow 10 \rightarrow 5 \rightarrow 16 \rightarrow 8 \rightarrow 4 \rightarrow 2 \rightarrow 1$

</li>
</ol>

---

### `while` vs `do...while` loops

Both while and do...while loops are indefinite loops, working similar. But still they have differences.

In `while` loop, the iteration starts with a condition check. If the result is `false`, the loop is not entered and execution is passed to after the loop.

In `do...while` loop, the condition check is done after iteration. This means an iteration may execute even if condition is not satisfied.

Eg:  
**while loop:**

```c
#include<stdio.h>

int main(){
    int n = 11;

    while(n < 10){
        printf("%d ", n);
    }

    printf("Outside Loop")
    return 0;
}
```

output

```txt
Outside Loop
```

**do...while loop:**

```c
#include<stdio.h>

int main(){
    int n = 11;

    do{
        printf("%d ", n);
    }while(n < 10);

    printf("Outside Loop");
    return 0;
}
```

output

```txt
11 Outside Loop
```

---

### Nested Looping

You can use one or more loops inside any other `while`, `for`, or `do...while` loop.

## The Infinite Loop

A loop becomes an `infinite loop` if a condition never becomes false. The for loop is traditionally used for this purpose. Since none of the three expressions that form the 'for' loop are required, you can make an endless loop by leaving the conditional expression empty.

```c
#include <stdio.h>

int main () {

   for( ; ; ) {
      printf("This loop will run forever.\n");
   }

   return 0;
}
```

When the conditional expression is absent, it is assumed to be `true`. You may have an initialization and increment expression, but C programmers more commonly use the `for( ; ; )` construct to signify an infinite loop.

While loops can also be used for infinite loops. In that case:

```c
while(1){

}

// or

while(true){

}
```

> Terminate an infinite loop (code execution) by pressing `Ctrl + C`.

---

## Loop Control Statements

**Loop control Statements** are statements that alter the flow of loop.
C supports the following statements

1. `break`
2. `continue`
3. `goto`

**1. `break` Statement:**
The `break` statement has the following two usages −

<ul>
<li> When a <code>break</code> statement is encountered inside a loop, the loop is immediately terminated and the program control resumes at the next statement following the loop.</li>

<li>It can be used to terminate a case in the switch statement</li>
</ul>

> In nested loops, the `break` statement will stop the execution of the innermost loop and start executing the next line of code after the block.

**Syntax:**

```c
break;
```

Eg:

```c
#include <stdio.h>

int main () {

    /* local variable definition */
    int a = 10;

    /* while loop execution */
    while( a < 20 ) {

        printf("value of a: %d\n", a);
        ++a;

        if( a > 15) {
            /* terminate the loop using break statement */
            break;
        }
    }

    return 0;
}
```

Output

```txt
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 15
```

It can be seen that, on encountering the `break` statement, the execution of loop is interrupted.

---

**2. `continue` statement:**

The `continue` statement is used to interrupt the current iteration. Instead of forcing termination, it forces the next iteration of the loop to take place, skipping any code in between.

For the `for` loop, continue statement causes the conditional test and increment portions of the loop to execute. For the `while` and `do...while` loops, continue statement causes the program control to pass to the conditional tests.

**Syntax:**

```c
continue;
```

Eg:

```c
#include <stdio.h>

int main () {

    /* local variable definition */
    int a = 10;

    /* do loop execution */
    do {

        if( a == 15) {
            /* skip the iteration */
            ++a;
            continue;
        }

        printf("value of a: %d\n", a);
        a++;

    } while( a < 20 );

    return 0;
}
```

Output:

```txt
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 16
value of a: 17
value of a: 18
value of a: 19
```

It can observed that, when the continue statement is encountered, the current iteration is skipped (when `a = 15`).

---

**3. `goto` statement:**

A `goto` statement in C programming provides an unconditional jump from the `'goto'` to a labeled statement in the same function.

**Syntax:**

```c
goto label;
..
.
label: statement;
```

Here label can be any plain text except C keyword and it can be set anywhere in the C program above or below to goto statement.

> Use of `goto` statement is highly discouraged in any programming language

It is because it makes difficult to trace the control flow of a program, making the program hard to understand and hard to modify. Any program that uses a goto can be rewritten to avoid them.

Eg:

```c
#include <stdio.h>

int main () {

    /* local variable definition */
    int a = 10;

    /* do loop execution */
    LOOP:do {

        if( a == 15) {
            /* skip the iteration */
            a = a + 1;
            goto LOOP;
        }

        printf("value of a: %d\n", a);
        a++;

    } while( a < 20 );

    return 0;
}
```

Output:

```txt
value of a: 10
value of a: 11
value of a: 12
value of a: 13
value of a: 14
value of a: 16
value of a: 17
value of a: 18
value of a: 19
```

---
