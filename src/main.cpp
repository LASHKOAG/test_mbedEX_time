// Example to setup the Real-Time Clock from a terminal, sford
 
#include "mbed.h"

void write_rtc(){
    //printf("YYYY MM DD HH MM SS[enter]\n");
    struct tm t;
    
    t.tm_year=2020;
    t.tm_mon=03;
    t.tm_mday=06;
    t.tm_hour=11;
    t.tm_min=47;
    t.tm_sec=23;

    t.tm_year = t.tm_year - 1900;
    t.tm_mon = t.tm_mon - 1;

    // set the time
    set_time(mktime(&t));
}

void read_rtc(){
    time_t seconds = time(NULL);
    printf("Time as a basic string = %s", ctime(&seconds));
}

int main() {
    write_rtc();
        // display the time
    while(1) {    
        read_rtc();
        wait(1);
    }
}


 //scanf("%d %d %d %d %d %d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec);