---
title: Functions in C Programming
subtitle: Functions in C Programming
image: ../C.png
prev: indefinite_loops.html
next: ""
---

# Functions in C Programming

## Introduction

Function is a set of organized lines of code that performs a specific, well defined task.

It is used reduce the number of lines of code and improve reusability, mainly applying on `DRY` principle - _Don't Repeat Yourself_.

Syntax:

```c
<return_type> functionName(<type> parameter1, <type> parameter2, ...) {
    // statements - body of the function
    return ...; // Optional
}
```

<ul>
<li><code>return_type</code>: </li>
<li><code>function_name</code>: </li>
<li><code>&lt;type&gt; parameter</code>: </li>
<li><code>return</code>: </li>
</ul>

Every C program has at least one function, which is `main()`, and all the most trivial programs can define additional functions.

### `return` statement

**Syntax:**

```c
return <value / variable>;
```

---
