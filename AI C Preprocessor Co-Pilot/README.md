# AI C Preprocessor Co-Pilot

## Task Description
This task demonstrates how Artificial Intelligence can be used as:
- A Macro Safety Inspector
- A Conditional Code Generator

The focus is on identifying and fixing common C preprocessor macro issues, and generating robust conditional compilation scaffolding.

---

## Scenario Choice
**Scenario A: Arithmetic Macro**

A simple arithmetic macro was selected to demonstrate common pitfalls such as operator precedence bugs.

---

## Flawed Macro

```c
#define MULTIPLY(a, b) a * b
