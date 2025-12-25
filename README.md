## Header Files in C

Header files (`.h` files) in C serve several important purposes:

- **Declarations**: They contain function declarations, type definitions, and macros
- **Interface**: They define the public interface of your code
- **Organization**: They help organize code into logical modules
- **Inclusion Guard**: They prevent multiple inclusions using `#ifndef`/`#define`/`#endif`

Example header file structure (`utils.h`):
```c
#ifndef UTILS_H
#define UTILS_H

// Function declarations
CURLcode sendHttpRequest(void);
void draw(int x, int y);
void processPoint(void);

#endif /* UTILS_H */
```

## Basic Compilation

gcc - compile and link C programs

To compile multiple source files together:

```bash
gcc main.c utils.c -o program -lcurl
```

Or compile separately and then link:
```bash
gcc -c main.c -o main.o
gcc -c utils.c -o utils.o
gcc main.o utils.o -o program -lcurl
```

```bash
gcc main.c -o main -lcurl
```

- `-o main`: specifies the output filename
- `-lcurl`: links the curl library from the system
- Homebrew installs curl to /opt/homebrew/lib/libcurl.a by default
- If you get "curl/curl.h: No such file or directory", install curl via Homebrew: brew install curl
- If needed, specify include path explicitly: `gcc main.c -o main -I/opt/homebrew/include -L/opt/homebrew/lib -lcurl`
