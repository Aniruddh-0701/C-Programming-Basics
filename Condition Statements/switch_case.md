---
title: Conditional Statements in C - Switch Statement
subtitle: Conditional statements Part 2/2
image: ../C.png
prev: condition_statements.html
next: loops.html
---

# Switch Case

A **switch** statement allows a variable to be tested for equality against a list of values. Each value is called a `case`, and the variable being switched on is checked for each switch case.

**Syntax:**

```c
switch(expression) {

    case constant-expression  :
        statement(s);
        break; /* optional */

    case constant-expression  :
        statement(s);
        break; /* optional */

    /* you can have any number of case statements */
    default : /* Optional */
        statement(s);
}
```

When the variable being switched on is equal to a `case`, the statements following that case will execute until a break statement is reached.

The `break` statement interrupts the flow inside `switch` block and the execution continues outside the block.

When a break statement is reached, the switch terminates, and the flow of control jumps to the next line following the `case`.

Not every case needs to contain a break. If no break appears, the flow of control will fall through to subsequent cases until a break is reached.

> We'll discuss about `break` statement in `loops`

A switch statement can have an optional `default` case, which must appear at the end of the switch. The default case can be used for performing a task when none of the cases is true.
No break is needed in the default case.

Eg:

```c
#include <stdio.h>

int main() {
    char ch;

    printf("Enter a color code (r/g/b/y)\n");
    scanf("%c", &ch);

    switch (ch) {
    case 'r':
        printf("red color");
        break;
    case 'b':
        printf("Blue color");
        break;
    case 'g':
        printf("Green color");
        break;
    case 'y':
        printf("Yellow color");
        break;
    default:
        printf("undefined color");
    }
    return 0;
}
```

Output

```txt
Enter a color code (r/g/b/y)
g
Green color
```
