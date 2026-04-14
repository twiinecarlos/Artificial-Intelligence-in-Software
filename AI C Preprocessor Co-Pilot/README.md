# AI: C Preprocessor Co-Pilot

## Task Description
This task demonstrates the practical use of AI as a Macro Safety Inspector and Conditional Code Generator in C. The goal was to identify a flaw in an arithmetic macro and then use AI to generate safer conditional compilation scaffolding for debugging.

## Scenario Choice
Scenario A: Creating a simple arithmetic macro

## AI Tool Used
ChatGPT

## Files
- [flawed_macro.c](./flawed_macro.c)  
  Contains the intentionally unsafe arithmetic macro and a basic usage example.
- [refactored_macro.h](./refactored_macro.h)  
  Contains the safer macro version and robust conditional debug scaffolding.
- [prompts.md](./prompts.md)  
  Contains the Safety Inspector prompt and the Conditional Code Generator prompt.
- [reflection.md](./reflection.md)  
  Contains the analysis of how AI helped detect preprocessor issues before compilation.
- [screenshots/](./screenshots/)  
  Contains screenshots of the AI responses for macro review and conditional code generation.
- [final_submission_notes.txt](./final_submission_notes.txt)  
  Contains the polished notes used in the final submission document.

## Macro Safety Issue
The flawed macro suffers from an operator precedence problem because the parameters and full expression are not wrapped in parentheses. This can produce incorrect results when arguments contain expressions.

## Outcome
This task showed that AI can be valuable before compilation by identifying subtle macro bugs and suggesting safer preprocessor patterns. It also helped generate structured conditional macros that are more reliable in real C projects.
