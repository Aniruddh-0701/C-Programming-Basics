---
title: Input/Output Practice questions
subtitle: Practice Code 1
image: ../C.png
prev: ""
Next: Practice_code2.html
---

This file contains practice question for **Introduction to C programming** (input and output).

---

**Q1:** Write a program to print 'Hello World'

---

**Q2:** Write a program to get age from user and print it.

> **Sample 1:**  
> I/P:  
> 19  
> O/p:  
> Your age is 19

<br>

> **Sample 2:**  
> I/P: 20  
> O/p:  
> Your age is 20

---

**Q3:** Write a program to get two numbers from user and print their sum

> **Sample 1:**  
> I/P:  
> 12  
> 12  
> O/p:  
> 24

<br>

> **Sample 2:**  
> I/P:  
> 10  
> 15  
> O/p:  
> 25

---

**Q4:** Write a program to get two numbers and perform all arithmetic operations on them.

**Input:**  
One Line containing two integers **`a`** and **`b`**

**Output:**  
Each Line containing result of operations in the order (`+`, `-`, `*`, `/` and `%`)

> **Sample 1:**  
> I/P:  
> 12  
> 13  
> O/P:  
> 15  
> -1  
> 156  
> 0  
> 12

---

**Q5:** (Update of **Q3**)  
Print formatted output

> **Sample 1:**  
> I/P:  
> 12  
> 12  
> O/p:  
> Sum of 12 and 12 is 24

<br>

> **Sample 2:**  
> I/P:  
> 10  
> 15  
> O/p:  
> Sum of 10 and 15 is 25

---

**Q6:** Write a program to get the side of the square and print its perimeter  
$\text{Perimeter of a square} = 4 \times \rm{side}$

> **Sample 1:**  
> I/P: 4  
> O/p: 16

<br>

> **Sample 2:**  
> I/P: 22  
> O/p: 88

---

**Q7:** Write a program to get the side of the square and print its area  
$\text{Area of square} = \rm{side} \times \rm{side}$

> **Sample 1:**  
> I/P: 4  
> O/p: 16

<br>

> **Sample 2:**  
> I/P: 22  
> O/p: 484

---

**Q8:** Write a program to get the length and breadth of a rectangle and print its perimeter  
$\text{Perimeter of a rectangle} = 2 \times \rm{(length + breadth)}$

> **Sample 1:**  
> I/P:  
> 4 <br>
> 4  
> O/p: 16

<br>

> **Sample 2:**  
> I/P:  
> 22  
> 21  
> O/p: 86

---

**Q9:** Write a program to get the length and breadth of a rectangle and print its area  
$\text{Area of a rectangle} = \text{length} \times \text{breadth}$

> **Sample 1:**  
> I/P:  
> 4 <br>
> 4  
> O/p: 16

<br>

> **Sample 2:**  
> I/P:  
> 22  
> 21  
> O/p: 462

---

**Q10:** Write a program to get the number of sides and length of each side of a regular polygon and print its perimeter.  
$\text{Perimeter} = \text{number of sides} \times \text{length of one side}$

> **Sample 1:**  
> I/P:  
> 8 <br>
> 4  
> O/p: 32

<br>

> **Sample 2:**  
> I/P:  
> 7 <br>
> 21  
> O/p: 147

---

**Q11:** Write a program to get the length and height of a right triangle and print its area.  
$\text{Area of right triangle} = \dfrac{1}{2} \times \rm{base} \times \rm{height}$

> **Sample 1:**  
> I/P:  
> 4 <br>
> 4  
> O/p: 8.0

<br>

> **Sample 2:**  
> I/P:  
> 22  
> 21  
> O/p: 231.0

---

**Q12:** Write a program to get the radius of a circle and print its perimeter rounded off to 3 decimal places. (Take $\pi = 3.14159$)  
$\text{Perimeter of a circle} = 2\pi \times \rm{radius}$

> **Sample 1:**  
> I/P:  
> 4 <br>
> O/p: 25.133

<br>

> **Sample 2:**  
> I/P:  
> 22  
> O/p: 138.230

---

**Q13:** Write a program to get the radius of a circle and print its area rounded off to 3 decimal places. (Take $\pi = 3.14159$)  
$\text{Area of a circle} = \pi \times \rm{radius}^2$

> **Sample 1:**  
> I/P:  
> 4 <br>
> O/p: 50.265

<br>

> **Sample 2:**  
> I/P:  
> 21  
> O/p: 1385.442

---

**Q14:** Write a program to get the sides of a triangle and print its area using Heron's Formula rounded off to 3 decimal places.  
$\text{Area of right triangle} = \sqrt{s \times (s-a)\times(s-b)\times(s-c)}$  
$\rm{where},$  
$s = \text{Semi-Perimeter} = \dfrac{\text{Perimeter of triangle}}{2}$  
$a, ~b, ~c = \text{Sides of the triangle}$

To get square root, use `sqrt()` function from `math.h` header file.

> **Sample 1:**  
> I/P:  
> 3 <br>
> 4<br>
> 5  
> O/p: 6.0

<br>

> **Sample 2:**  
> I/P:  
> 12  
> 21  
> 30  
> O/p: 98.359

---

**Q15:** Write a program to get the side of a equilateral triangle and print its area rounded off to 4 decimal places.  
$\text{Area of equilateral triangle} = \dfrac{\sqrt{3}}{4} \times \rm{side}^2$

To get square root, use `sqrt()` function from `math.h` header file.

> **Sample 1:**  
> I/P:  
> 4 <br>
> O/p: 6.9282

<br>

> **Sample 2:**  
> I/P:  
> 31  
> O/p: 416.1252

---

**Q16:** Write a program to get the length and height of a right triangle and print the length of its hypotenuse rounded off to 3 decimal places using Pythagoras Theorem.  
From Pythagoras theorem, $ \rm{hypotenuse} = \sqrt{\rm{base}^2 + \rm{height}^2}$

To get square root, use `sqrt()` function from `math.h` header file.

> **Sample 1:**  
> I/P:  
> 3 <br>
> 4  
> O/p: 5

<br>

> **Sample 2:**  
> I/P:  
> 12  
> 6 <br>
> O/p: 13.416

---

**Q17:** Write a program to get the side of a cube and print its volume.  
$\text{Volume of cube} = \rm{side}^3$

> **Sample 1:**  
> I/P: 15  
> O/P: 3375

---

**Q18:** Write a program to get the side of a cube and print its total surface area.  
$ \text{T.S.A of Cube} = 6 \times \rm{side}^2$

> **Sample 1:**  
> I/P: 15  
> O/P: 1350

---

**Q19:** Write a program to get the side of a cube and print its Lateral surface area.  
$\text{L.S.A of cube} = 4  \times \rm{side}^2$

---

**Q20:** Write a program to get the length, breadth and height of a cuboid and print its volume.  
$\text{Volume of Cuboid} = \rm{length} \times \rm{breadth} \times \rm{height}$

> **Sample 1:**  
> I/P:  
> 43  
> 28  
> 35  
> O/P: 42140

---

**Q21:** Write a program to get the length, breadth and height of a cuboid and print its Total Surface Area.  
$\text{T.S.A of Cuboid} = 2 \times ( (\rm{length} \times \rm{breadth}) + (\rm{breadth} \times \rm{height}) + (\rm{height} \times \rm{length}))$

> **Sample 1:**  
> I/P:  
> 43  
> 28  
> 35  
> O/P: 7378

---

**Q22:** Write a program to get the length, breadth and height of a cuboid and print its Lateral Surface Area.  
$\text{L.S.A of Cuboid} = 2 \times \rm{height} \times (\rm{breadth}+ \rm{length})$

---
