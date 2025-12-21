// how to run C in macOs
// gcc main.c -o main -lcurl
// ./main

## How to compile C programs on macOS

This project demonstrates how to compile C programs on macOS using GCC.

## Basic Compilation

gcc - compile and link C programs

```bash
gcc main.c -o main -lcurl
```

- `-o main`: specifies the output filename
- `-lcurl`: links the curl library from the system
- Homebrew installs curl to /opt/homebrew/lib/libcurl.a by default
- If you get "curl/curl.h: No such file or directory", install curl via Homebrew: brew install curl
- If needed, specify include path explicitly: `gcc main.c -o main -I/opt/homebrew/include -L/opt/homebrew/lib -lcurl`
