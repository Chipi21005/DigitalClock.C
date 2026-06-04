#include<stdio.h>
#include<time.h>
#include<stdbool.h>
#include<unistd.h>


int main (){

    /*Digital Clock */

    time_t rawtime= 0; /*Jan 1 1970 Epoch*/
    struct tm *ptime = NULL;
    bool IsRunning = true;

    printf("Digital clock\n");

    while(IsRunning){

        time(&rawtime);

        ptime = localtime(&rawtime);

        printf("\r%02d:%02d:%02d", ptime->tm_hour, ptime->tm_min, ptime->tm_sec);
        fflush(stdout);

        sleep(1);


    }

   return 0;
}