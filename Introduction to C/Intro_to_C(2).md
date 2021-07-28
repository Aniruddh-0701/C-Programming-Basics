---
title: Introduction to C - Part 2
subtitle: Introduction to C -  Part 2/3
image: ../C.png
---

# Introduction to C - Part 2

## Input

```c
scanf("format specifier", &identifier);
```

The format specifiers are as listed for `printf`. It is to be noted that for all format specifiers except `%c`, the input is taken till the next character < space (in terms ASCII value), mostly `\n` or space (`' '`)

---

## Operators

Used to perform arithmetic and logical operations.

### Types

1. Arithmetic
2. Relational
3. Logical
4. Bitwise
5. Assignment
6. Miscellaneous Operators

#### 1. Arithmetic

Perform arithmetic operations

| Operator | Description                 | Example    |
| -------- | --------------------------- | ---------- |
| +        | Addition                    | 2 + 3 = 5  |
| -        | Subtraction                 | 2 - 3 = -1 |
| \*       | Multiplication              | 2 \* 3 = 6 |
| /        | Division (returns quotient) | 2 / 3 = 0  |
| %        | Modulo (returns remainder)  | 2 % 3 = 2  |
| ++       | Increment operator          | ++2 or 2++ |
| --       | Decrement operator          | --3 or 3-- |

#### 2. Relational

Relations between two variables

| Operator | Description      | Example |
| -------- | ---------------- | ------- |
| ==       | Equal            | a == b  |
| !=       | Not Equal        | a != b  |
| >        | Greater          | a > b   |
| >=       | Greater or Equal | a >= b  |
| <        | Lesser           | a < b   |
| <=       | Lesser or Equal  | a <= b  |

#### 3. Logical

Perform Logical operations

| Operator | Description          |
| -------- | -------------------- |
| &&       | Logical Operator AND |
| \|\|     | Logical Operator OR  |
| !        | Logical operator NOT |

#### 4. Bitwise

Perform bitwise operations

| Operator | Description                                            | Syntax     | Example       |
| -------- | ------------------------------------------------------ | ---------- | ------------- |
| &        | Bitwise AND                                            | x & y      | 101 & 11      |
| &#124;   | Bitwise OR                                             | x &#124; y | 101 &#124; 11 |
| ~        | Bitwise NOT                                            | ~x         | ~1            |
| ^        | Bitwise XOR                                            | x ^ y      | 1 ^ 1         |
| <<       | Shifts y bits in x to the left (Left shift operator)   | x << y     | 111001 << 2   |
| >>       | Shifts y bits in x to the right (Right Shift Operator) | x >> y     | 111001 >> 2   |

#### 5. Assignment

Assigns value to a variable

| Operator | Description              | Example |
| -------- | ------------------------ | ------- |
| =        | Assign                   | c = 30  |
| +=       | Add and assign           | a += b  |
| -=       | Subtract and assign      | a -= b  |
| \*=      | Multiply and assign      | a \*= b |
| /=       | Divide and assign        | a /= b  |
| %=       | Get remainder and assign | a %= b  |
| <<=      | Left Shift and assign    | a %= b  |
| >>=      | Right Shift and assign   | a %= b  |
| &=       | Bitwise AND and assign   | a %= b  |
| \|=      | Bitwise OR and assign    | a %= b  |
| ^=       | Bitwise XOR and assign   | a %= b  |

#### 6. Miscellaneous Operators

Besides the operators discussed above, there are a few other important operators supported by C language

| Operator | Description                                        | Example         |
| -------- | -------------------------------------------------- | --------------- |
| &        | Address Operator (returns Address of a identifier) | &a              |
| \*       | Pointer to a variable                              | \*a             |
| ?        | Ternary Operator                                   | condition? a: b |

---

## Operator Precedence

Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others; for example, the multiplication operator has a higher precedence than the addition operator.

| Category             | Operator                           | Associativity |
| -------------------- | ---------------------------------- | ------------- |
| Postfix              | () [] −> . ++ −−                   | Left to right |
| Unary                | + − ! ~ ++ −− (type)\* & sizeof    | Right to left |
| Multiplicative       | \* / %                             | Left to right |
| Additive             | + −                                | Left to right |
| Shift                | << >>                              | Left to right |
| Relational           | < <= > >=                          | Left to right |
| Equality             | == !=                              | Left to right |
| Bitwise AND          | &                                  | Left to right |
| Bitwise XOR          | ^                                  | Left to right |
| Bitwise OR           | \|                                 | Left to right |
| Logical AND          | &&                                 | Left to right |
| Logical OR           | \|\|                               | Left to right |
| Conditional(Ternary) | ?:                                 | Right to left |
| Assignment           | = += −= \*= /= %=>>= <<= &= ^= \|= | Right to left |
| Comma                | ,                                  | Left to right |

---

## Expressions

A statement that gives a finite value.

Types:

1. Infix expressions:  
   Example: 12 + 23
2. Prefix expressions:  
   Example: + 12 23
3. Postfix expressions:  
   Example: 12 23 +

---

## Escape Sequences

Few special characters defined under ASCII for formatting strings/output. The `\` is used to escape the original use of a character.

| Sequence | Explanation                 |
| -------- | --------------------------- |
| \\\\     | Back slash                  |
| \\'      | Apostrophe or Single quotes |
| \n       | new line or line feed       |
| \f       | form feed                   |
| \r       | carriage return             |
| \t       | horizontal tab              |
| \\"      | Double quotes               |
| \0       | Null character              |
| \a       | bell                        |
| \v       | vertical tab                |

---

[Prev](<Intro_to_C(1).md>)

[Next](<Intro_to_C(3).md>)
