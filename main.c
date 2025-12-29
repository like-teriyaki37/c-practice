#include "utils.h"
#include <stdio.h>

int main() {
    CURLcode result = sendHttpRequest();
    processPoint();

    int num = 0;
    exampleFunction(&num);
    printf("Value after function call: %d\n", num);
    
    return 0;
}
