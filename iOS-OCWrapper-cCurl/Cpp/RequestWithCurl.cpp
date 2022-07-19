//
//  RequestWithCurl.cpp
//  iOS-OCWrapper-cCurl
//
//  Created by Yilmaz Edis on 2022/7/19.
//

#include "RequestWithCurl.h"
#include <iostream>
#include "../include/curl.h"

void RequestWithCurl::sendRequest() {
    CURL *curl;
    CURLcode res;
    curl = curl_easy_init();
    if(curl) {
        curl_easy_setopt(curl, CURLOPT_CUSTOMREQUEST, "POST");
        curl_easy_setopt(curl, CURLOPT_URL, "https://httpbin.org/post");
        curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
        struct curl_slist *headers = NULL;
        headers = curl_slist_append(headers, "Content-Type: application/json");
        curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);
        const char *data = "{\"name\":\"yilmaz\",\"surname\":\"edis\"}";
        curl_easy_setopt(curl, CURLOPT_POSTFIELDS, data);
        res = curl_easy_perform(curl);

        if(res != CURLE_OK) {
            fprintf(stderr, "curl_easy_perform() failed: %s\n",
                    curl_easy_strerror(res));
        } else if (res == CURLE_OK) {
            fprintf(stderr, "Success\n");
        }
    }
    curl_easy_cleanup(curl);
}
