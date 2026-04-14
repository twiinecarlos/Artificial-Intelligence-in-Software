# AI C Preprocessor Co-Pilot

## Task Summary
This task demonstrates the use of AI as a Macro Safety Inspector and Conditional Code Generator for C preprocessor code.

## Scenario Choice
Scenario A: Simple arithmetic macro.

## Files
- `flawed_macro.c` — contains the intentionally unsafe macro:
  `#define MULTIPLY(a, b) a * b`
- `refactored_macro.h` — contains the safer macro version and conditional debug scaffolding
- `README.md` — task documentation

## Macro Safety Issue
The flawed macro suffers from operator precedence problems because its parameters and full expression are not wrapped in parentheses.

## AI Tool Used
ChatGPT

## What AI Helped With
- Identifying the precedence bug in the macro
- Explaining macro expansion behavior
- Generating robust conditional compilation scaffolding with include guards, debug macros, `__FILE__`, `__LINE__`, and `do { } while (0)`
