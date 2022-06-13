---
title: Introduction to C - Part 2
subtitle: Introduction to C -  Part 2/3
image: ../C.png
next: Intro_to_C(3).html
prev: Intro_to_C(1).html
---

# Introduction to C - Part 2

[TOC]

## Tokens - Continued

For details on tokens, check [part 1](<Intro_to_C(1).md>)

### Operator Precedence

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

### Special Symbols

The following special symbols are used in C having some special meaning and thus, cannot be used for some other purpose.

`[] () {} , ; * = #`

1. **Brackets `[]`:** Opening and closing brackets are used as array element reference. These indicate single and multidimensional subscripts
2. **Parentheses `()`:** These special symbols are used to indicate function calls and function parameters.
3. **Braces `{}`:** These opening and ending curly braces mark the start and end of a block of code containing more than one executable statement.
4. **Comma (`,`):** It is used to separate more than one statements like for separating parameters in function calls.
5. **Colon (`:`):** It is an operator that essentially invokes something called an initialization list.
6. **Semicolon (`;`):** It is known as a statement terminator.  It indicates the end of one logical entity. That’s why each individual statement must be ended with a semicolon.
7. **Asterisk (`*`):** It is used to create a pointer variable and  for the multiplication of variables.
8. **Assignment operator (`=`):** It is used to assign values and for the logical operation validation.
9. **Pre-processor (`#`):** The preprocessor is a macro processor that is used automatically by the compiler to transform your program before actual compilation.

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

## Output handling or Printing out statements/Values to user

In most cases, we made need to show values or status of the program during the program execution.

### `printf` statement

It is usually done by using the `printf` statement.

**Syntax:**

```c
printf("format specifier", identifier or expression);
printf("statement");
```

#### Format Specifiers

1. `%d` - integer (int)
2. `%f` - float
3. `%c` - character (char)
4. `%s` - string (str)
5. `%lf` - double

[Writing your first Program - printing "Hello World"](Hello_world.c)

Printing out values by functions like `putc`, `puts`, `fputc`, `fputs`, etc. will be dealt with later.

---

### Modifiers

Modifiers are key words that modify the default state of `int` and `char` data types. There are 4 modifiers in `C`:

1. short
2. long
3. signed
4. unsigned

**1. `short`:**

It limits user to store small integer values from `-32768` to `32767`. It can be used only on `int` data type.

```c
short int myShortInt = 10;
```

**2. `long`:**

It allows storage of large value than default limit for `int`. Tt can be use once or twice to mention the limits.

```c
long int myLongInt;
long myLongerInt;
long long myLongLongInt;
```

**3. `signed`:**

It is default modifier of `int` and `char` data type if no modifier is specified. It says that user can store negative and positive values.

```c
int myValue = -289;
signed int myValues = -544;
```

**4. `unsigned`:**

When user intends to store only positive values in the given data type (`int` and `char`).

```c
unsigned int myVal = 10;
```

To check the limitations of the modifiers, check [Part 3](<Intro_to_c(3).md>)

---

### List of Format specifiers

Having understood the modifiers in C, we can look at the complete list of format specifiers.

| Format Specifier       | Type                          |
| ---------------------- | ----------------------------- |
| `%c`                   | Character                     |
| `%d`                   | Signed integer                |
| `%e` or `%E`           | Scientific notation of floats |
| `%f`                   | Float values                  |
| `%g` or `%G`           | Similar as `%e` or `%E`       |
| `%hi`                  | Signed integer (`short`)      |
| `%hu`                  | Unsigned Integer (`short`)    |
| `%i`                   | Unsigned integer              |
| `%l` or `%ld` or `%li` | Long or `long int`            |
| `%lf`                  | Double                        |
| `%Lf`                  | Long double                   |
| `%lu`                  | Unsigned int or unsigned long |
| `%lli` or `%lld`       | Long long                     |
| `%llu`                 | Unsigned long long            |
| `%o`                   | Octal representation          |
| `%p`                   | Pointer                       |
| `%s`                   | String                        |
| `%u`                   | Unsigned int                  |
| `%x` or `%X`           | Hexadecimal representation    |
| `%n`                   | Prints nothing                |
| `%%`                   | Prints `%` character          |

The above are the basic format specifiers. We can add some other parts with the format specifiers for custom formatting. These are like below:

- A minus symbol (`-`) sign tells left alignment

- A number after `%` specifies the minimum field width. If string is less than the width, it will be filled with spaces

- A period (`.`) is used to separate field width and precision

---

## Comments

Lines that are not executed. It used only for understanding by the programmers or users.

`//` is used to comment a single line

`/**/` - comment multiple lines

`/***/` - Documentation

```c
// single line comment
/*
This is used to comment multiple lines
*/

/**
 * Documentation String
 */
```

---

## Input handling / Getting input from user

```c
scanf("format specifier", &identifier);
```

The format specifiers are as listed for `printf` [part 1](<Intro_to_C(1).md>). It is to be noted that for all format specifiers except `%c`, the input is taken till the next character < space (in terms ASCII value), mostly `\n` or space (`' '`)

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

## Type casting and conversion

Converting one datatype into another is known as **type casting** or, **type-conversion**. For example, if you want to store a 'long' value into a simple integer then you can type cast `long` to `int`.

It happens in two ways:

1. Automatic type conversion
2. Forced type conversion / type casting

### Type Conversion (Automatic)

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
   printf("Value of sum : %f\n", sum);
   return 0;
}
```

output

```c
Value of sum : 116.000000
```

Here, it is simple to understand that first c gets converted to integer, but as the final value is `float`, usual arithmetic conversion applies and the compiler converts `i` and `c` into `float` and adds them yielding a `float` result.

### Type casting

To have custom type conversion that are not supported by default, we do type casting.

**Syntax:**

```c
(typeName) expression
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
