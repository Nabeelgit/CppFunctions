#include <iostream>
using namespace std;

string removeSpace(string str){
    string newStr = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] != ' '){
            newStr += str[i];
        }
    }
    return newStr;
}

int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << removeSpace(str);
    return 0;
}