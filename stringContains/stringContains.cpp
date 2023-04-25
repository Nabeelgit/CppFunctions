#include <iostream>
#include <string.h> 
using namespace std;

bool stringContains(string str, string search){
    int searchLen = search.length();
    int strLen = str.length();
    string temp = "";
    for(int i = 0; i < strLen; i++){
        if(str[i] == search[0]){
            for(int j = i, k = 0; k < searchLen && j < strLen; j++, k++){
                temp += str[j];
            }
            if(temp == search){
                return true;
            }
            temp = "";
        }    
    }
    return false;
}

int main(){
    string str, search;
    cout << "Enter string to search: ";
    getline(cin, str);
    cout << "Enter string to search for: ";
    getline(cin, search);
    cout << str << "\n" << search << "\n";
    if(stringContains(str, search)){
        cout << "This string does contain the search";
    } else {
        cout << "This string does NOT contain the search";
    }
    return 0;
}