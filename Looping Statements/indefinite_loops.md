---
title: Looping Statements in C - Part 1
subtitle: Looping Statements in C - Part 1/2
image: ../C.png
prev: loops.html
next: ""
---

# Looping Statements

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

### 3. `do while` loop

The `do while` looping is yet another looping statement that is used in indefinite cases. It works similar to the `while` loop where truthfulness of a conditional expression decides the flow.

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

### `while` vs `do while` loops

---
