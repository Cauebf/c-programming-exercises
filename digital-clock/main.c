#include <stdbool.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main() {

    time_t rawtime = 0; // seconds passed since January 1, 1970 (Unix epoch)
    struct tm *pTime = NULL; // pointer to struct tm
    bool isRunning = true;

    printf("DIGITAL CLOCK\n");

    while (isRunning) {

        // get the current time in seconds since the Unix epoch
        time(&rawtime); 

        // converts Unix time to local time
        pTime = localtime(&rawtime); 

        // print the current time
         printf("\r%02d:%02d:%02d",
               pTime->tm_hour,
               pTime->tm_min,
               pTime->tm_sec);

        // makes sure the output is displayed immediately
        fflush(stdout);

        // wait for 1 second before updating the time
        sleep(1);
    }

    return 0;
}
