#include <stdio.h>
#include <time.h>
 
int main(void)
{
    time_t now;
    struct tm *tm_now;
 
    //time(&now);
    //tm_now = gmtime(&now);
 
    //printf("now datetime: %d-%d-%d %d:%d:%d\n", tm_now->tm_year, tm_now->tm_mon, tm_now->tm_mday, tm_now->tm_hour, tm_now->tm_min, tm_now->tm_sec);
 
    char    datetime[200];
 
    time(&now);
    tm_now = localtime(&now);
    strftime(datetime, 200, "%Y-%m-%d_%H_%M_%S.mp4", tm_now);
 
    printf("now datetime : %s\n", datetime);

    return(0);
}
