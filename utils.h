#ifndef UTILS_H
#define UTILS_H

#include <curl/curl.h>

// Function declarations
CURLcode sendHttpRequest(void);
void draw(int x, int y);
void processPoint(void);
void exampleFunction(int *value);

#endif /* UTILS_H */
