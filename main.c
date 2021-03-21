/* HTTP GET client with 5 timeout written in C99 */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <curl/curl.h>

int main(void) {
  CURL *curl;
  CURLcode res;
  int timeout = 0;
  while(timeout != 3){
    curl = curl_easy_init();
    if(curl) {
      curl_easy_setopt(curl, CURLOPT_URL, "localhost:39393");
      curl_easy_setopt(curl, CURLOPT_FOLLOWLOCATION, 1L);
      res = curl_easy_perform(curl);
        if (res != CURLE_OK) {
          fprintf(stderr, "Failed: %s for %d times\n",
              curl_easy_strerror(res), timeout+1);
          timeout++;
        } else
          timeout = 0;
        }
    curl_easy_cleanup(curl);
    sleep(3);
  }
  return 0;
}
