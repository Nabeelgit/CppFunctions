#include <iostream>
#include <vector>
#include <string.h>
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

string* parse_url(string url){
    static string arr[4] = {"", "", "", ""};
    vector<string> http_splitted = split(url, "://");
    string http = http_splitted[0];
    arr[0] = http;
    vector<string> splitted = split(http_splitted[1], "/");
    string domain = splitted[0];
    arr[1] = domain;
    if(splitted.size() > 1 && stringContains(http_splitted[1], "/")){
        splitted = split(splitted[1], "?");
        splitted = split(splitted[0], "#:~:text=");
        if(splitted[0] != ""){
            arr[2] = splitted[0];
        }
    } 
    if(stringContains(http_splitted[1], "?")) {
        splitted = split(http_splitted[1], "?");
        for(string i: splitted){
            cout << i << endl;
        }
        arr[3] = splitted[1];
    }
    return arr;
}

int main(){
    cout << "Enter url: ";
    string url;
    getline(cin, url);
    string* arr;
    arr = parse_url(url);
    cout << "HTTP: " << arr[0] << "\n";
    cout << "DOMAIN: " << arr[1] << "\n";
    cout << "PATH: " << arr[2] << "\n";
    cout << "QUERY: " << arr[3] << "\n";
    return 0;
}