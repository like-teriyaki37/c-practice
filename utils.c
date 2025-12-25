#include "utils.h"
#include <stdio.h>

CURLcode sendHttpRequest() {
    CURL *curl; // curl handle for HTTP requests
    CURLcode res; // curl return code

    curl = curl_easy_init(); // initialize curl, we use curl_easy_init instead of curl_global_init because it's simpler for single requests
    // but for multiple concurrent requests, curl_global_init might be preferred
    if(curl) {
        // curl_easy_setopt takes 3 parameters:
        // handle - the curl easy handle we initialized
        // option - the option we want to set (CURLOPT_URL)
        // value - the value for that option
        curl_easy_setopt(curl, CURLOPT_URL, "https://httpbin.org/get"); // set the URL to fetch

        res = curl_easy_perform(curl);
        curl_easy_cleanup(curl);

        if (res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n", curl_easy_strerror(res));
        } else {
            printf("CURL result: %d\n", res);
        }
        return res;
    }

    return CURLE_FAILED_INIT;
}

void draw(int x, int y) {
    printf("Drawing point at (%d, %d)\n", x, y);
}

void processPoint() {
    // struct points {
    //     int x;
    //     int y;
    // };

    // int x = 10;
    // int y = 20;

    // draw(x, y);

    typedef struct {
        int x;
        int y;
        char * type;
    } Point;

    Point p;
    p.x = 10;
    p.y = 20;

    draw(p.x, p.y);

    Point p2;
    p2.x = 30;
    p2.y = 40;

    draw(p2.x, p2.y);
}

