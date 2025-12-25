#include "utils.h"

int main() {
    CURLcode result = sendHttpRequest();
    processPoint();
    
    return 0;
}
