// Example to setup the Real-Time Clock from a terminal, sford
 
#include "mbed.h"
#include <string>
#include <iostream>
void write_rtc(std::string& input){
    //printf("YYYY MM DD HH MM SS[enter]\n");
    struct tm t;
    
    t.tm_year=std::stoi(input.substr(0, input.find(".")));
    t.tm_mon=std::stoi(input.substr(5, 2));
    t.tm_mday=std::stoi(input.substr(8, 2));
    t.tm_hour=std::stoi(input.substr(11, 2));
    t.tm_min=std::stoi(input.substr(14, 2));
    t.tm_sec=std::stoi(input.substr(17, 2));

    t.tm_year = t.tm_year - 1900;
    t.tm_mon = t.tm_mon - 1;

    // set the time
    set_time(mktime(&t));
    /*
        std::string input = "2020.03.06 12.13.32";
    std::string firstWord = input.substr(0, input.find("."));
        std::cout << " The word is: " << firstWord << std::endl;
    int getData= std::stoi(firstWord);
    */
}

void read_rtc(){
    time_t seconds = time(NULL);
    printf("Time as a basic string = %s", ctime(&seconds));

    /*
    const char *s = "Hello, World!";
    std::string str(s);
    */
}

int main() {
        char text[100]="2020.03.06 14.25.32";
        std::string text2="2020.03.06 14.25.32";
    write_rtc(text2);
        // display the time

    while(1) {    
        read_rtc();
        wait(1);
    }
}


 //scanf("%d %d %d %d %d %d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec);