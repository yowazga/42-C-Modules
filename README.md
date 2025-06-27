# 42 C++ Modules (00-09)
**A Complete Journey Through C++ Fundamentals**

---

## 📚 Table of Contents
1. [Overview](#-overview)
2. [Module Summary](#-module-summary)
3. [Technical Requirements](#-technical-requirements)
4. [Installation & Usage](#-installation--usage)
5. [Key Concepts](#-key-concepts)
6. [Resources](#-resources)

---

## 🌟 Overview
This repository contains my implementations of all C++ modules (00 through 09) from the 42 curriculum. Each module builds progressively on C++ concepts while adhering to the C++98 standard.

---

## 📖 Module Summary

### Module 00: Namespaces, Classes, and Basics
- **Exercises**:
  - `Megaphone`: Basic I/O and string manipulation
  - `PhoneBook`: Class design and containment
  - `Account`: Class recreation from logs

### Module 01: Memory Allocation and References
- **Exercises**:
  - `Zombie`: Heap/stack allocation
  - `Brain`: Pointer/reference comparison
  - `Weapon`: Reference vs pointer usage

### Module 02: Orthodox Canonical Form
- **Exercises**:
  - `Fixed-point` numbers
  - Operator overloading
  - BSP (Point in triangle)

### Module 03: Inheritance
- **Exercises**:
  - `ClapTrap` base class
  - `ScavTrap`/`FragTrap` derived classes
  - Diamond inheritance with `DiamondTrap`

### Module 04: Polymorphism
- **Exercises**:
  - Animal class hierarchy
  - Abstract classes and interfaces
  - Materia system with deep copying

### Module 05: Exceptions
- **Exercises**:
  - `Bureaucrat` and `AForm` classes
  - Exception handling
  - Form hierarchy with execution

### Module 06: Casts
- **Exercises**:
  - Scalar type conversion
  - Serialization/deserialization
  - Runtime type identification

### Module 07: Templates
- **Exercises**:
  - Function templates (`swap`, `min`, `max`)
  - `iter` template function
  - `Array` class template

### Module 08: STL Containers
- **Exercises**:
  - `easyfind` template
  - `Span` number management
  - `MutantStack` iterator adapter

### Module 09: STL Algorithms
- **Exercises**:
  - Bitcoin exchange calculator
  - RPN calculator
  - Merge-insert sort (`PmergeMe`)

---

## ⚙️ Technical Requirements
- **Standard**: C++98 compliant
- **Compilation**: 
  ```bash
  -Wall -Wextra -Werror -std=c++98
  ```
- **Memory:** No leaks (valgrind clean)

- **Design:**

  - Orthodox Canonical Form (Modules 02-09)

  - Proper inheritance/polymorphism

  - Exception-safe code

  ## 🛠️ Installation & Usage
1.Clone repository:

```bash
git clone [repository-url]
```
2.Navigate to any exercise:

```bash
cd cpp0[module-number]/ex0[exercise-number]
```
3.Compile and run:

```bash
make && ./program_name [args]
```
## 🧠 Key Concepts
| Module | Core Concepts                |
| :-------- | :------------------------- |
|00|OOP Basics, Class Design|
|01|Memory Management, References|
|02|Canonical Form, Operator Overloading|
|03|Inheritance, Virtual Destructors|
|04|Polymorphism, Abstract Classes|
|05|Exception Handling, Form Hierarchy|
|06|Type Casting, Serialization|
|07|Template Programming|
|08|STL Containers, Iterators|
|09|STL Algorithms, Performance|

## 📚 Resources
- [C++98 Reference](https://en.cppreference.com/)
- [Object-Oriented Programming Concepts](https://www.geeksforgeeks.org/object-oriented-programming-in-cpp/)
- [STL Documentation](https://cplusplus.com/reference/stl/)
