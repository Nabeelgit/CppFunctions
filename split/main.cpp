#include <iostream>
#include <vector>
using namespace std;

vector<string> split(string str, char del){
    vector<string> splitted;
    string temp = "";
    int strLen = str.length();
    int start = 0;
    for(int i = 0; i < strLen; i++){
        if(str[i] == del){
            for(; start < i; start++){
                temp += str[start];
            }
            splitted.push_back(temp);
            temp = "";
            start = i + 1;
        }
    }
    if(start != strLen){
        for(; start < strLen; start++){
            temp += str[start];
        }
        splitted.push_back(temp);
    }
    return splitted;
}

int main(){
    string str; 
    char del;
    cout << "Enter string to split by: ";
    getline(cin, str);
    cout << "Enter delimiter:";
    cin >> del;
    vector<string> splitted = split(str, del);
    for(string i : splitted){
        cout << i << "\n";
    }
    return 0;
}