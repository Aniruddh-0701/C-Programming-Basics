---
title: Introduction to C - Part 2
subtitle: Introduction to C -  Part 2/3
image: ../C.png
next: Intro_to_C(3).html
prev: Intro_to_C(1).html
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

| Operator | Description                 | Example        |
| -------- | --------------------------- | -------------- |
| `+`      | Addition                    | 2 `+` 3 `=` 5  |
| `-`      | Subtraction                 | 2 `-` 3 `=` -1 |
| `*`      | Multiplication              | 2 `*` 3 `=` 6  |
| `/`      | Division (returns quotient) | 2 `/` 3 `=` 0  |
| `%`      | Modulo (returns remainder)  | 2 `%` 3 `=` 2  |
| `++`     | Increment operator          | `++2` or `2++` |
| `--`     | Decrement operator          | `--3` or `3--` |

#### 2. Relational

Relations between two variables

| Operator | Description      | Example  |
| -------- | ---------------- | -------- |
| `==`     | Equal            | a `==` b |
| `!=`     | Not Equal        | a `!=` b |
| `>`      | Greater          | a `>` b  |
| `>=`     | Greater or Equal | a `>=` b |
| `<`      | Lesser           | a `<` b  |
| `<=`     | Lesser or Equal  | a `<=` b |

#### 3. Logical

Perform Logical operations

| Operator     | Description            |
| ------------ | ---------------------- |
| `&&`         | Logical Operator `AND` |
| &#124;&#124; | Logical Operator `OR`  |
| `!`          | Logical operator `NOT` |

#### 4. Bitwise

Perform bitwise operations. This class of operators takes the binary form of each integer, and applies the operator of respective bits.

The binary forms are padded by `0` on the left to compensate the differences in number of bits to represent each value.

| Operator | Description                                            | Syntax     | Example    |
| -------- | ------------------------------------------------------ | ---------- | ---------- |
| `&`      | Bitwise AND                                            | x `&` y    | 5 `&` 2    |
| &#124;   | Bitwise OR                                             | x &#124; y | 5 &#124; 3 |
| `~`      | Bitwise NOT                                            | `~x`       | `~1`       |
| `^`      | Bitwise XOR                                            | x `^` y    | 6 `^` 1    |
| `<<`     | Shifts y bits in x to the left (Left shift operator)   | x `<<` y   | 10 `<<` 2  |
| `>>`     | Shifts y bits in x to the right (Right Shift Operator) | x `>>` y   | 15 `>>` 2  |

**1. Bitwise AND (`&`):**

It applies Binary `AND` operation to every bit.

Eg:

```c
5 & 2 = 0

   5  = 101
   2  = 010 // Padding zeroes on left
5 & 2 = 000 = 0
```

**2. Bitwise OR (`|`):**

It applies the Bitwise `OR` operation to every bit

Eg:

```c
5 | 3 = 7

   5  = 101
   3  = 011 // Padding zeroes on left
5 | 3 = 111 = 7
```

**3. Bitwise NOT (`~`):**

It applies the negation/complement/ `NOT` operation. Additional to flipping the bits, it changes sign.

Eg:

```c
~5 = 2

   5  = 101
   ~5 = 010 = 2
```

**Anomaly in `C`:**

The bitwise complement operator acts differently in `C`.

Instead of flipping the bits, it provides 2's complement of the number.

Two's complement is an operation on binary numbers. The 2's complement of a number is equal to the negative of the number plus 1, i.e.,

```txt
~N = -(N + 1)
```

So,

```c
~5 = -(5 + 1) = -6
```

**4. Bitwise XOR (`^`):**

It applies the `Exclusive OR` (`XOR`) operation for each bit.

Eg:

```c
6 ^ 2 = 4

   6  = 110
   2  = 010 // Padding zeroes on left
6 ^ 1 = 100 = 4
```

**5. Left Shift Operator (`<<`):**

Shifts the bits to the left by adding trailing zeros and removing start bits (MSB) which overflows.

Eg:

```c
5 << 2 = 20
5  = 101
5 << 2 = 10100 = 20

```

**6. Right Shift Operator (`>>`):**

Shifts the bits to the right by adding leading zeroes and removing End bits (LSB).

Eg:

```c
15 >> 2 = 0
15  = 1111
15 >> 2 = 0011 = 3
```

#### 5. Assignment

Assigns value to a variable

| Operator | Description              | Example   |
| -------- | ------------------------ | --------- |
| `=`      | Assign                   | c `=` 30  |
| `+=`     | Add and assign           | a `+=` b  |
| `-=`     | Subtract and assign      | a `-=` b  |
| `*=`     | Multiply and assign      | a `*=` b  |
| `/=`     | Divide and assign        | a `/=` b  |
| `%=`     | Get remainder and assign | a `%=` b  |
| `<<=`    | Left Shift and assign    | a `<<=` b |
| `>>=`    | Right Shift and assign   | a `>>=` b |
| `&=`     | Bitwise AND and assign   | a `&=` b  |
| &#124;=  | Bitwise OR and assign    | a \| = b  |
| `^=`     | Bitwise XOR and assign   | a `^=` b  |

#### 6. Miscellaneous Operators

Besides the operators discussed above, there are a few other important operators supported by C language

| Operator | Description                                        | Example               |
| -------- | -------------------------------------------------- | --------------------- |
| `&`      | Address Operator (returns Address of a identifier) | `&a`                  |
| `*`      | Pointer to a variable / Dereferencing operator     | `*a`                  |
| `?`      | Ternary Operator                                   | `condition? a: b`     |
| `.`      | dot operator                                       | `var1.var2`           |
| `->`     | Arrow or Member access operator                    | `(pointer)->(member)` |
| `,`      | Comma operator                                     | `a, b`                |

> Check pointers topic for more details on dereferencing operator and address operator

#### Dot operator

The dot ( `.` ) operator is used for direct member selection via object name. In other words, it is used to access the child object/variable.

**Syntax:**

```c
<variable_name>.<member_name>
```

> The dot and arrow operator will be addressed in structures and unions.

#### Comma operator

The comma token (`,`) acts as both a separator and an operator.

The comma operator is used to evaluate multiple expressions in the same statement.

**Syntax:**

```c
(expression1, expression2, expression3, ...)
```

When used inside a parenthesis, the expressions separated by comma are evaluated sequentially, the result being the result of last expression.

Eg:

```c
#include<stdio.h>

int main() {
   int x = 10, y = 20;
   int a = (x--, y + 2);

   printf("x = %d, y = %d, a = %d", x, y, a);
}
```

Output:

```txt
x = 9, y = 20, a = 22
```

### `sizeof()` operation

The `sizeof` function is a builtin function available in `stdio.h` header file. It returns an integer indicating the size of memory in bytes, allocated to the specific variable.

**Syntax:**

```c
sizeof(<variable_name>);
// or
sizeof(<type>);
```

---

## Operator Precedence

Operator precedence determines the grouping of terms in an expression and decides how an expression is evaluated. Certain operators have higher precedence than others; for example, the multiplication operator has a higher precedence than the addition operator.

| Category              | Operator                                                   | Associativity |
| --------------------- | ---------------------------------------------------------- | ------------- |
| Postfix               | `()` `[]` `−>` `.` `++` `−−`                               | Left to right |
| Unary                 | `+` `−` `!` `~` `++` `−−` `(type)` `*` `&` `sizeof`        | Right to left |
| Multiplicative        | `*` `/` `%`                                                | Left to right |
| Additive              | `+` `−`                                                    | Left to right |
| Shift                 | `<<` `>>`                                                  | Left to right |
| Relational            | `<` `<=` `>` `>=`                                          | Left to right |
| Equality              | `==` `!=`                                                  | Left to right |
| Bitwise AND           | `&`                                                        | Left to right |
| Bitwise XOR           | `^`                                                        | Left to right |
| Bitwise OR            | &#124;                                                     | Left to right |
| Logical AND           | `&&`                                                       | Left to right |
| Logical OR            | &#124;&#124;                                               | Left to right |
| Conditional (Ternary) | `?:`                                                       | Right to left |
| Assignment            | `=` `+=` `−=` `*=` `/=` `%=` `>>=` `<<=` `&=` `^=` &#124;= | Right to left |
| Comma                 | `,`                                                        | Left to right |

> `(type)` means type casting operation

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
| \\ \\    | Back slash                  |
| \\'      | Apostrophe or Single quotes |
| \n       | new line or line feed       |
| \f       | form feed                   |
| \r       | carriage return             |
| \t       | horizontal tab              |
| \\"      | Double quotes               |
| \0       | Null character              |
| \a       | bell                        |
| \v       | vertical tab                |

### Type casting and conversion

Converting one datatype into another is known as **type casting** or, **type-conversion**. For example, if you want to store a 'long' value into a simple integer then you can type cast `long` to `int`.

It happens in two ways:

1. Automatic type conversion
2. Forced type conversion / type casting

#### Type Conversion (Automatic)

At points, we use some operation that needs values in different type than defined. The compiler, by default, converts the data type automatically to support the expression.

1. char $\rightarrow$ int
2. int $\rightarrow$ char
3. int $\rightarrow$ float
4. int $\rightarrow$ double

This is done by the `Arithmetic converter`. The following is the basic hierarchy of conversion.

$$\text{long double}$$
$$\uparrow$$
$$\text{double} $$
$$\uparrow$$
$$\text{float}$$
$$\uparrow$$
$$\text{unsigned long long}$$
$$\uparrow$$
$$\text{long long}$$
$$\uparrow$$
$$\text{unsigned long}$$
$$\uparrow$$
$$\text{long}$$
$$\uparrow$$
$$\text{unsigned int}$$
$$\uparrow$$
$$\text{int}$$

Eg:

```c
#include <stdio.h>

int main() {

   int  i = 17;
   char c = 'c'; /* ascii value is 99 */
   float sum;

   sum = i + c;
   printf("Value of sum : %f\n", sum );
   return 0;
}
```

output

```c
Value of sum : 116.000000
```

Here, it is simple to understand that first c gets converted to integer, but as the final value is `float`, usual arithmetic conversion applies and the compiler converts `i` and `c` into `float` and adds them yielding a `float` result.

#### Type casting

To have custom type conversion that are not supported by default, we do type casting.

**Syntax:**

```c
(type_name) expression
```

Eg:

```c
#include <stdio.h>

int main() {

   int sum = 17, count = 5;
   double mean;

   mean = (double) sum / count;
   printf("Value of mean : %f\n", mean );
   return 0;
}
```

Output

```txt
Value of mean : 3.400000
```

---

[Prev](<Intro_to_C(1).md>)

[Next](<Intro_to_C(3).md>)
