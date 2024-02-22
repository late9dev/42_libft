<h1 style="opacity: 0; position: absolute;">
	42 ft_printf
</h1>

<p align="center">
  <a href="https://42.fr">
  <img src="./ressources/dark_banner_libft.png" alt="readme banner libft">
  </a>
</p>

<p align="center">
	<b>
		<a href="#about">About</a>
		<span> · </span>
		<a href="#how-to-use">How to use</a>
		<span> · </span>
		<a href="#test">Test</a>
	</b>
</p>

<p align="center">
	<img alt="GitHub last commit" src="https://img.shields.io/github/last-commit/late9dev/42_libft">
	<img alt="GitHub top language" src="https://img.shields.io/github/languages/top/late9dev/42_libft">
</p>

## About

`Libft` is an introductory project at [42](https://42.fr) that involves creating your own C library, compiling a collection of standard and additional functions that can be reused in later projects. This foundational project lays the groundwork for understanding basic data structures, [memory allocation](https://youtu.be/MIL2BK02X8A?si=DAC4B3Nw32vwGhIu), string manipulation, and much more, providing a solid base for all future C programming tasks.

## How to use

### Clone the repository

```bash
git clone https://github.com/late9dev/42_libft.git libft
```

```bash
cd libft && make
```

### Create a test

```bash
vim test.c
```

```c
#include "libft.h"

int	main(void)
{
	/*Test all the functions you want */
	ft_putstr_fd("Hello World !", 1);
	ft_putchar_fd('\n', 1);
	return (0);
}
```

### Compile & run

```bash
gcc -Wall -Wextra -Werror test.c -o test -L. && ./test
```

## Test

I passed all the mandatory [Francinette](https://github.com/xicodomingues/francinette) tests.

<img src="./ressources/libft_francinette_tests.png" alt="Francinette printf tests passed">

---

<div align="center">
	<i>By a Student of <a href="https://42.fr"><b>42 Paris</b></a>.</i>
</div>