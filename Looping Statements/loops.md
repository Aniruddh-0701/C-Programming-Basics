---
title: Looping Statements in C
subtitle: Looping Statements in C
image: ../C.png
prev: condition_statements.html
next: ""
---

# Looping Statemets

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
