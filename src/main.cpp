// Example to setup the Real-Time Clock from a terminal, sford
 
#include "mbed.h"
#include "hwclockstm.h"

int main() {
        char text[100]="2020.03.06 14.25.32";
        std::string text2="2020.03.06 14.25.32";
    // write_rtc(text2, 0);
    write_rtc2(1583484257, 0);
        // display the time

    while(1) {    
        read_rtc();
        wait(1);
    }
}


 //scanf("%d %d %d %d %d %d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec);