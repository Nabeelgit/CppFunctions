#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string str, string del){
    vector<string> splitted;
    string temp = "";
    int strLen = str.length();
    int delLen = del.length();
    int start = 0;
    for(int i = 0; i < strLen; i++){
        if(str[i] == del[0]){
            for(int j = i, k = 0; j < strLen && k < delLen; j++, k++){
                temp += str[j];
            }
            if(temp == del){
                temp = "";
                for(; start < i; start++){
                    temp += str[start];
                }
                splitted.push_back(temp);
                start = i + delLen;
            }
            temp = "";
        } 
    }
    for(; start < strLen; start++){
        temp += str[start];
    }
    splitted.push_back(temp);
    return splitted;
}

int main(){
    string str; 
    string del;
    cout << "Enter string to split by: ";
    getline(cin, str);
    cout << "Enter delimiter:";
    getline(cin, del);
    vector<string> splitted = split(str, del);
    for(string i : splitted){
        cout << i << "\n";
    }
    return 0;
}