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

## Macro Safety Issue
The flawed macro suffers from an operator precedence problem because the parameters and full expression are not wrapped in parentheses. This can produce incorrect results when arguments contain expressions.

## AI Prompts Used

### Safety Inspector Prompt
Act as a Senior C Developer and macro safety inspector.

Review this intentionally flawed C macro:

#define MULTIPLY(a, b) a * b

I do not want a full final program. I want a focused macro review.

Please do all of the following:
1. Identify whether this macro has an operator precedence bug.
2. Explain how the C preprocessor expands this macro in an expression like MULTIPLY(2 + 3, 4 + 5).
3. Explain why the result can be incorrect.
4. Suggest a safer refactored macro definition.
5. Briefly mention whether macros like this can also cause side-effect problems in other designs.

### Conditional Code Generator Prompt
Act as a Senior C Developer.

Generate robust C preprocessor scaffolding for a debug logging feature related to macro-based arithmetic testing.

Requirements:
1. Use #ifndef / #define include guards for a header file.
2. Create a DEBUG_LOG macro that prints messages only when DEBUG is defined.
3. Make the debug output include __FILE__ and __LINE__.
4. Make the macro safe inside if/else statements by using the do { ... } while (0) pattern.
5. When DEBUG is not defined, the macro should compile to a no-op.
6. Keep the output focused on the macro definitions and conditional compilation scaffolding only, not a full program.

## Reflection
AI is especially useful for checking C preprocessor macros because macro bugs happen before normal program logic is even visible and can be difficult to spot by eye. In this task, the AI helped identify an operator precedence flaw before compilation and also helped generate safer conditional scaffolding that follows professional macro patterns. This makes AI valuable as a preprocessor safety check because it reduces silent logic bugs and improves code reliability early in development.
