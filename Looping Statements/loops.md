---
title: Looping Statements in C
subtitle: Looping Statements in C
image: ../C.png
prev: condition_statements.html
next: ""
---

# Looping Statements

There may be times when a set of tasks need to be repeated. It is done with the help of looping statements.

A loop is a block of code that would repeat for a specified number of times or until some condition is satisfied.

**Types:**

1. Definite Looping
2. Indefinite Looping

## Definite vs Indefinite looping

A **definite loop** is a loop in which the number of times it is going to execute is known in advance before entering the loop. The number of iterations it is going to repeat will be typically provided through an `integer` variable.

> Iteration is the `repetition` of a process/task in order to generate a sequence of outcomes desired.

In an **indefinite loop**, the number of times it is going to execute is not known in advance and it is going to be executed until some condition is satisfied.

Some of common examples that you would need to implement indefinite loops are prompting for reading an input until user inserts a positive integer, reading a password until the user inserts the same password twice in a row, etc.

## Types of Looping Statements

1. `for` loop
2. `while` loop
3. `do-while` loop

> Looping variables are generally named `i`, `j`, and `k`, while it is not recommended citing clarity of the code.

The examples below will use them for easiness of code understanding, making a note that it should not be followed.

### 1. `for` loop

`for` is the most commonly used definite looping statement.

**Syntax:**

```c
for(<initialization>; <condition>; <increment/decrement>)
```

A `looping variable` is a variable that decides the flow of a loop.

1. **Initialization** - assigning the loop variable with the starting value.
2. **Condition** - defines the end point of the loop with respect to the looping variable
3. **Increment/decrement** - Defining the expression that changes the variable's value at the end of each iteration.

**Eg:**

The below example prints numbers from `1` to `10`

```c
#include<stdio.h>

int main(){
    for(int i = 1; i <= 10; i++){
        printf("%d ", i);
    }
    return 0;
}
```

The output will be:

```txt
1 2 3 4 5 6 7 8 9 10
```

Explanation:

Here `i` is the loop variable

1. Initialization - `i` is being declared and initialized to `1` as the starting value needed is `1`.
2. Condition - The loop should run till i reaches 10 $\left(\rm{i} \le 10\right)$. So `i <= 10` is the required condition.
3. Increment/Decrement - Here `i` should be varying from $1 \rightarrow 10$, i.e. for every loop it should be increased by 1 ( `i++` unary increment operator is used).

> Watch for `mismatch` in condition and variable change. Incorrect variable change can cause `infinite` loop.

Note:

1. The initialization phase can be given in 3 ways.

   - The declaration and initialization both in the loop definition (as above)

   ```c
   for(int <variable> = value; <condition>; <increment/decrement>) {
       // Statements
   }
   ```

   - The declaration being done before the loop and initialization in the definition:

   ```c
   int <variable>;
   for(<variable> = <value>; <condition>; <increment/decrement>){
       // Statements
   }
   ```

   - Both declaration and initialization outside the loop. If done so, the initialization section is left empty.

   ```c
   int <variable> = <value>;
   for(; <condition>; <increment/decrement>){
       // Statements
   }
   ```

2. Increment - The increment part can be any expression that results in change of variable towards the condition.

   ```c
   i++ or ++i or i-- or --i // unary operation
   i += 10 or i *= 20 // assignment and modification
   i = i / 2 or i = 1 + 3 // operation then assignment
   ```

   The above three variations are allowed in the condition that there is variable change to offer definite loop termination

3. within loop modifications of _loop variable_ - The loop variable can be modified inside the loop too.  
   The below example shows a type where the variable change is not provided in loop definition.

   ```c
   #include <stdio.h>

   int main() {
       for (int i = 1; i <= 10;) {
           printf("%d ", i++); // increment done here
       }
       return 0;
   }
   ```

#### Pre-increment ( `i++` ) vs post-increment ( `++i` )

### 2. `while` loop

**Syntax:**

```c
while (condition) {
    // statements
}
```

### 3. `do while` loop

**Syntax:**

```c
do {
    // statements
} while(condition);
```
