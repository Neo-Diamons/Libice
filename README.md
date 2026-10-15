# Libice

A small C standard library written from scratch: strings, memory, number conversion, `printf`-family functions and linked lists, built as a static library (`libice.a`).

## Build

```sh
cd lib
make            # builds libice.a
make re         # rebuild
make clean      # remove build files
make fclean     # also remove libice.a
make tests_run  # unit tests (requires Criterion and gcovr)
```

## Usage

```c
#include <ice/printf.h>
#include <ice/string.h>

int main(void)
{
    char *s = ice_strdup("hello");

    ice_printf("%s has %d chars\n", s, (int)ice_strlen(s));
    return 0;
}
```

```sh
gcc main.c -Iinclude -Llib -lice -o main
```

## Modules

| Header         | Functions                                                                                                                                |
|----------------|------------------------------------------------------------------------------------------------------------------------------------------|
| `ice/string.h` | `strlen` `strcmp` `strncmp` `strcpy` `strncpy` `strcat` `strncat` `strdup` `strndup` `strchr` `strstr` `strrev` `strsplit` `strtrim` ... |
| `ice/memory.h` | `calloc` `realloc` `memcpy` `memmove` `memset` `memchr` `memcmp`                                                                         |
| `ice/int.h`    | `atoi` `strtol` `itoa` `utoa` `btoa` `ftoa` `intlen`                                                                                     |
| `ice/printf.h` | `printf` `dprintf` `sprintf` `snprintf` `asprintf`                                                                                       |
| `ice/output.h` | `puts` `dputs`                                                                                                                           |
| `ice/array.h`  | `array_len` `free_array`                                                                                                                 |
| `list.h`       | linked list: create, add, get, pop, remove, sort, destroy                                                                                |

All functions are prefixed with `ice_` (for example `ice_strlen`).

## License

[MIT](LICENSE.md)

