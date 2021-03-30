# Introduction to C - Part 1

## Introduction

### Program

A program is a set of instructions written on a computer to perform a specific task.  

### Programming Language

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

## Basic parts in programming

A few basic instructions that appear in almost all language (by [Allen Downey](https://en.wikipedia.org/wiki/Allen_Downey), in his book *How To Think Like A Computer Scientist*):

1. **Input:** Gather data from the keyboard, a file, or some other device.
2. **Output:** Display data on the screen or send data to a file or other device.
3. **Arithmetic:** Perform basic arithmetical operations like addition and multiplication
4. **Conditional Execution:** Check for certain conditions and execute the appropriate sequence of statements.
5. **Repetition:** Perform some action repeatedly, usually with some variation.

## Introduction to C programming

C is a general-purpose, procedural computer programming language supporting structured programming, with a static type system.  

By design, C provides constructs that map efficiently to typical machine instructions.  

It is generally used to learn basic programming concepts. C language is being used to build other High level programming languages like python.  
![Derivatives of C language](Clogo.png)

## Basic Structure

```c
#include<stdio.h>

int main(){
    //Declaration and Initialization
    //Statements
    return 0;
}
```

## Output handling or Printing out statements/Values to user

**Syntax:**

```c
printf("format specifier", identifier);
printf("statement");
```

### Format Specifiers

1. %d - integer (int)
2. %f - float
3. %c - character (char)
4. %s - string (str)
5. %lf - double

**Identifiers** - variables or expressions

[Writing your first Program - printing "Hello World"](Hello_world.c)  

## Data Types

Data can be defined as a representation of facts, concepts, or instructions in a formalized manner, which should be suitable for communication, interpretation, or processing by human or electronic machine.  

Data type is an attribute which tells the compiler or interpreter how the programmer intends to use the data.  

Basic Types:

1. Numeric:  
    - Integer - 0, 2, 30
    - Float - 3.0, -0.0005 (single precision)
    - Double - 3.0, -0.00003 (double precision)
2. Boolean - `true` and `false`
3. Character - all symbols defined by ASCII
4. Null

**ASCII** - American Standard Code for Information Interchange

![ASCII charset](ASCII_chart.png)

Derived Data Types:

1. Array
2. Strings

Additional types in integers (Base):

1. Binary (base 2) [0,1]
2. Octal (base 8) [0-7]
3. Decimal (base 10) [0-9] Most Common
4. HexaDecimal (base 16) [0-9, A-F]

## Literals

Literals are data that are directly used or processed in a program.

### Types of Identifiers

1. Constant - Values that do not change during the execution
2. Variable - Values that change

There are certain rules to be followed while naming an identifier:

1. Should start only with an alphabet or underscore ('\_') - a1, a2, \_name not 1a, 24c
2. Can contain characters defined in ASCII (alphabets and numbers) except ( &#36;, &, \\, /, etc.)
3. It should not be keyword
4. No spaces
5. Generally, uppercase alphabets are not used in the beginning of a variable name.

Naming Conventions: [Naming Convention - Wikipedia article](https://en.wikipedia.org/wiki/Naming_convention_(programming))  

For Easy readability:

- Function or use as name
- first letter in lowercase
- If Name has Multiple words:
    1. Use underscore for space
    2. joint writing with words in Camel Case
- Avoid Long names

Naming convention for multi word variable names:

1. Camel case (abcAbc)
2. Pascal case (AbcAbc)
3. Screaming case (ABC)
4. Lazy case (abc)
5. Kebab case (ab-ab)
6. Snake case(ab_ab)

E.g.: age, input_values, firstName, number, prime_num  
Not: user name, number_to_find_prime

[Variables (data type), Naming Convention](variable_name.c)  

## Keywords or Reserved words

Words used for a special purpose in program.

E.g: `scanf`, `printf`, `int`, `if`, `for`, `try`, etc.

## Comments

Lines that are not executed. It used only for understanding by the programmers or users.

// is used to comment a single line

/**/ - comment multiple lines

```c
// single line comment
/*
This is used to comment multiple lines
*/
```

[Next](Intro_to_C(2).md)
