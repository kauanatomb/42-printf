# ft_printf

A reimplementation of the standard `printf` function in C, developed as part of the 42 school curriculum. This project focuses on handling formatted output, variadic arguments, and custom data formatting.

## About

`ft_printf` mimics the behavior of the C standard library's `printf` function with a limited set of supported format specifiers. This project was developed from scratch, including custom handling of character output, number conversion, hexadecimal and pointer formatting.

## Features

Supported format specifiers:

- `%c` — character
- `%s` — string
- `%p` — pointer (in hexadecimal)
- `%d` / `%i` — signed decimal integer
- `%u` — unsigned decimal integer
- `%x` / `%X` — unsigned hexadecimal (lower/upper)
- `%%` — literal `%` character

## Usage

Clone the repository:

```bash
git clone https://github.com/kauanatomb/42-ft_printf.git ft_printf
cd ft_printf
```
Compilation

The library builds into libftprintf.a.

Make targets:

    make — builds the library

    make clean — removes object files

    make fclean — removes object files and the static library

    make re — rebuilds everything from scratch

Tests

Basic tests are included in tests/main.c.

To compile and run them:
```bash
make test
```
> This will produce and execute the test_ft_printf binary.
