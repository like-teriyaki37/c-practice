#ifndef UTILS_H
#define UTILS_H

#include <curl/curl.h>

// Function declarations
CURLcode sendHttpRequest(void);
void draw(int x, int y);
void processPoint(void);
void exampleFunction(int *value);

typedef struct {
    int x;
    int y;
    char * type;
} Point;

#endif /* UTILS_H */
