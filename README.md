# ft_printf

## Summary

**ft_printf** is a custom implementation of the C `printf()` function. This project focuses on understanding variadic functions and mimicking the behavior of the standard `printf()` function.

## Contents

- **Introduction**: Learn about `printf()` and variadic functions. Enhance programming skills with a moderate difficulty exercise. Once completed, you can integrate `ft_printf()` into your `libft` for use in C projects.
- **Common Instructions**: 
  - Written in C and compliant with Norm.
  - Avoid unexpected crashes and memory leaks.
  - Create a Makefile with specific rules.
  - Include bonus functionalities in separate files if applicable.
  - Use a git repository for submission and peer-evaluation.
- **Mandatory Part**:
  - Create `libftprintf.a` with `ft_printf()`.
  - Implement conversions: `%c`, `%s`, `%p`, `%d`, `%i`, `%u`, `%x`, `%X`, and `%%`.
  - Use `ar` for library creation.
- **Bonus Part** (optional):
  - Implement additional features like field width, flags (`-0.`), and other conversions (`#`, `+`).
  - Bonus evaluation is contingent on a perfect mandatory part.
- **Submission and Peer-Evaluation**:
  - Submit to the git repository with correct file names.
  - Evaluation includes checking the mandatory part before considering bonuses.

## Key Requirements

- **Function Prototype**: `int ft_printf(const char *, ...);`
- **External Functions**: `malloc`, `free`, `write`, `va_start`, `va_arg`, `va_copy`, `va_end`
- **Libft Authorized**: Yes

Make sure to follow all guidelines for a successful submission and integration into `libft`.

For detailed implementation and additional requirements, refer to the individual sections in the project documentation.
