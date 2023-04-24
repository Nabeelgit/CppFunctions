#include <iostream>
#include <windows.h>
#include <string>
using namespace std;

string formatTime(int min, int sec){
    string min_str = to_string(min);
    string sec_str = to_string(sec);
    string formatted;
    if(min < 10){
        formatted += "0" + min_str;
    } else {
        formatted += min_str;
    }
    formatted += ":";
    if(sec < 10) {
        formatted += "0" + sec_str;
    } else {
        formatted += sec_str;
    }
    return formatted;
}

void countdown(int min, int sec){
    while(min != 0 || sec != 0){
        while(sec != 0){
            sec--;
            Sleep(1000);
            cout << formatTime(min, sec) << "\n";
        }
        if(min > 0){
            sec = 60;
            min--;
        }
    }
    cout << formatTime(min, sec);
}

int main(){
    int min, sec;
    cout << "Enter 0 if none\n";
    cout << "Enter time in minutes:";
    cin >> min;
    cout << "Enter time in seconds:";
    cin >> sec;
    cout << formatTime(min, sec) << "\n";
    countdown(min, sec);
    return 0;
}

