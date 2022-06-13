---
title: Introduction to C - Part 1
subtitle: Introduction to C -  Part 1/3
image: ../C.png
prev: ""
next: Intro_to_C(2).html
---

# Introduction to C - Part 1

[TOC]

## Introduction

#### Program

A program is a set of instructions written on a computer to perform a specific task.

#### Programming Language

Simply said, it is a language used to write a program.

It is a well defined medium to instruct the computer.

### Types of Programming Languages

Based on uses, the Programming languages can be classified under 50 types refer [List of Programming Languages by type](https://en.wikipedia.org/wiki/List_of_programming_languages_by_type)

Based on ease of readability:

1. Low-level Language - Assembly Language
2. Middle level Language - C, C++, etc.
3. High level Language - Python, java, Perl, etc.

Based on execution method:

1. Compiled Language
2. Interpreted Language

---

## Basic parts in programming

A few basic instructions that appear in almost all language (by [Allen Downey](https://en.wikipedia.org/wiki/Allen_Downey), in his book _How To Think Like A Computer Scientist_):

1. **Input:** Gather data from the keyboard, a file, or some other device.
2. **Output:** Display data on the screen or send data to a file or other device.
3. **Arithmetic:** Perform basic arithmetical operations like addition and multiplication
4. **Conditional Execution:** Check for certain conditions and execute the appropriate sequence of statements.
5. **Repetition:** Perform some action repeatedly, usually with some variation.

---

## Introduction to C programming

C is a general-purpose, procedural computer programming language supporting structured programming, with a static type system. In static type system, variables are defined to have only a specific type of data and cannot be assigned a different type of data.

By design, C provides constructs that map efficiently to typical machine instructions.

It is generally used to learn basic programming concepts. C language is being used to build other High level programming languages like python.  
![Derivatives of C language](Clogo.png)

---

## Basic Structure

```c
/**
* Basic Structure of a C program.
* It is the documentation section
*/

#include <stdio.h>

// definition and global declarations

int main(){
    //Declaration and Initialization
    //Statements
    return 0;
}
```

- The first few lines define what is called a _documentation_. This section contains a multi line comment describing the code. The details on comments are discussed below.

- The next is the list of _preprocessor directives_ (indicated by # symbol).
The preprocessor directives are set of commands that are executed before the start of the actual program execution.
They are usually commands that define data required for program execution or are the link for the compiler to indicate header files that are being used from the library. **Header files** are documents that define the symbols that are used in the program. Here `stdio.h` header file is linked.

- The next section is the area of definition of Constants and Global variables

- Below this is the area of code.

> The `main` function is the point of code at which execution of the program starts
>
> More details on `functions` will be discussed later.

## Data Types

Data can be defined as a representation of facts, concepts, or instructions in a formalized manner, which should be suitable for communication, interpretation, or processing by human or electronic machine.

Data type is an attribute which tells the compiler or interpreter how the programmer intends to use the data.

**Basic Types:**

The following are the basic or primitive data types supported by C language.

1. Numeric:
   - Integer - 0, 2, 30
   - Float - 3.0, -0.0005 (single precision = n / 2 bits)
   - Double - 3.0, -0.00003 (double precision = n bits)
2. Boolean - `true` and `false`
3. Character - all symbols defined by ASCII
4. Null

(n = number of bits supported by the system)

**ASCII** - American Standard Code for Information Interchange

![ASCII charset](ASCII_chart.png)

**Derived Data Types:**

These are the data types which are derived or are formed by combination of two or more primitive data types.

1. Array
2. Strings
3. Structures
4. Unions
5. Enum
6. Pointers

Additional types in integers (Base):

1. Binary (base 2) [0,1]
2. Octal (base 8) [0-7]
3. Decimal (base 10) [0-9] Most Common
4. HexaDecimal (base 16) [0-9, A-F]

> `Derived` or `Non primitive` data types and the `types of integers` will be discussed later

---

## Tokens

A token is the smallest element of a program that is meaningful to the compiler. Tokens can be classified as follows:  

1. Keywords
2. Literals
3. Identifiers
4. Operators
5. Special Symbols

### Keywords or Reserved words

Words used for a special purpose in program. Since they have a special function, they must not be used as identifiers. If used, they may cause issues while execution of the program.

E.g: `scanf`, `printf`, `int`, `if`, `for`, `try`, etc.

### Literals

Literals are data that are directly used or processed in a program. If your program contains direct values like `10`, `3.14159`, `'a'` or `"str"`, they are known as literals.

### Identifiers

An identifier is a symbol used for any variable, function, data definition, labels in your program, etc.

Before starting any language, you must at least know how you name an identifier in that language.

In C, an identifier is a combination of alphanumeric characters, i.e. first begin with a letter of the alphabet or an underscore, and the remaining are alphabets, numeric digit, underscores.

#### Types of Identifiers

1. Constant - Identifier whose value does not change during the execution of the program.
2. Variable - Identifier whose value changes during the execution of the program.

There are certain rules to be followed while constructing an identifier name:

1. Should start only with an alphabet or underscore (`'_'`) like a1, a2, \_name not 1a, 24c
2. Can contain characters defined in ASCII (alphabets and numbers) except ( &#36;, \\, /, etc.)
3. It should not be keyword
4. No spaces
5. Generally, uppercase alphabets are not used in the beginning of a variable name.

Naming Convention is the general practice in a programming language followed by majority of the programmers around the globe
for convenience in reading. The list of naming conventions in several languages are listed in the article
[Naming Convention - Wikipedia article](<https://en.wikipedia.org/wiki/Naming_convention_(programming)>)

For Easy readability:

<ul>
<li> Function or use as name</li>
<li> first letter in lowercase</li>
<li> If Name has Multiple words:</li>
  <ol>
  <li> Use underscore for space </li>
  <li> joint writing with words in Camel Case</li>
  </ol>
<li> Avoid Long names</li>
</ul>
Naming convention for multi word variable names:

1. Camel case (abcAbc) - `camelCase`
2. Pascal case (AbcAbc) - `PascalCase`
3. Screaming case (ABC) - `SCREAMINGCASE`
4. Lazy case (abc) - `lazycase`
5. Kebab case (ab-ab) - `kebab-case`
6. Snake case(ab_ab) - `snake_case`

> Of the above, the `camel` and `snake` cases are the most common ones

Eg.:

```txt
age, input_values, firstName, number, prime_num
```

Not this way:

```txt
user name, number_to_find_prime
```

Example file - [Variables (data type), Naming Convention](variable_name.c)

#### Declaration vs Initialization of variables

**Declaration** is the process of defining the variables' or constants' names to be used in the program.

**Syntax:**

```c
<type> variableName;
```

> Multiple variables of same type can be declared on the same line, being separated be comma.

Eg:

```c
int age, num1;
char ch;
```

**Initialization** is the process of assigning values to the variables declared. It is done using assignment operator `=`. (For Details, check Assignment operators)

Eg:

```c
age = 10;
ch = 'a';
```

> Both Declaration and Initialization can be done in the same statement, for multiple variables

```c
int age = 20, num2 = 10;
char ch = 'z';
```

---

#### Declaration of constants

In `C`, constants are declared and initialized in a single line using the `const` keyword. It is advised to have the constants' name in Uppercase.

**Syntax:**

```c
const <type> variable_name = <value>;
```

Eg:

```c
const int MY_CONSTANT = 10;
```

---

### Operators

Used to perform arithmetic and logical operations.

#### Types

1. Arithmetic
2. Relational
3. Logical
4. Bitwise
5. Assignment
6. Miscellaneous Operators

#### 1. Arithmetic

Arithmetic operators are used to perform arithmetic operations.

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

They define the relations between two variables. They result `true` if the relation is as defined by the operator and `false` otherwise.

| Operator | Name             | Usage    | Example        |
| -------- | ---------------- | -------- | -------------- |
| `==`     | Equal            | a `==` b | 2 == 3 (false) |
| `!=`     | Not Equal        | a `!=` b | 2 != 3 (true)  |
| `>`      | Greater          | a `>` b  | 2 > 3 (false)  |
| `>=`     | Greater or Equal | a `>=` b | 2 >= 3 (false) |
| `<`      | Lesser           | a `<` b  | 2 < 3 (true)   |
| `<=`     | Lesser or Equal  | a `<=` b | 2 <= 3 (true)  |

#### 3. Logical

They are used to perform Logical operations on two variables / expressions. They offer boolean results based on logical table of the respective operator.

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

Assigns value (literal or result of an expression) to a variable.

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

##### Dot operator

The dot ( `.` ) operator is used for direct member selection via object name. In other words, it is used to access the child object/variable.

**Syntax:**

```c
<variable_name>.<member_name>
```

> The dot and arrow operator will be addressed in structures and unions.

##### Comma operator

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

##### `sizeof()` operation

The `sizeof` function is a builtin function available in `stdio.h` header file. It returns an integer indicating the size of memory in bytes, allocated to the specific variable.

**Syntax:**

```c
sizeof(<variable_name>);
// or
sizeof(<type>);
```

---

[Next](<Intro_to_C(2).md>)
