// Example to setup the Real-Time Clock from a terminal, sford
 
#include "mbed.h"
#include <string>
#include <iostream>
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
    /*
        std::string input = "2020.03.06 12.13.32";
    std::string firstWord = input.substr(0, input.find("."));
        std::cout << " The word is: " << firstWord << std::endl;
    int getData= std::stoi(firstWord);
    */
}

void read_rtc(std::string* input){
    time_t seconds = time(NULL);
    printf("Time as a basic string = %s", ctime(&seconds));
    //std::string input = "hello arm";
    //std::string input = "2020.03.06 12.13.32";
    std::string firstWord = input.substr(0, input.find("."));
        std::cout << " The word is: " << firstWord << std::endl;
    int getData= std::stoi(firstWord);
    firstWord = input.substr(5, 2);
        std::cout << " The word is: " << firstWord << std::endl;
    
    firstWord = input.substr(8, 2);
        std::cout << " The word is: " << firstWord << std::endl;
    firstWord = input.substr(11, 2);
        std::cout << " The word is: " << firstWord << std::endl;
    firstWord = input.substr(14, 2);
        std::cout << " The word is: " << firstWord << std::endl;
    firstWord = input.substr(17, 2);
        std::cout << " The word is: " << firstWord << std::endl;
        std::cout << " ===================== " << std::endl;
        printf("getData = %d\n", getData);

}

int main() {
    write_rtc();
        // display the time
        char text[100]="2020.03.06 12.13.32";
        std::string text2="2020.03.06 12.13.32";
    while(1) {    
        read_rtc(text);
        wait(1);
    }
}


 //scanf("%d %d %d %d %d %d", &t.tm_year, &t.tm_mon, &t.tm_mday, &t.tm_hour, &t.tm_min, &t.tm_sec);