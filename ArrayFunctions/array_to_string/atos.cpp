#include <iostream>
using namespace std;

string atos(string arr[], int size, string add = ""){
    string str = "";     
    for(int i = 0; i < size; i++){
        if(i != (size - 1)){
            str += (arr[i] + add);
        } else {
            str += arr[i];
        }
    }
    return str; 
}

int main(){
    string arr[] = {"Hi", "Hey", "Hello"};
    cout << "'" << atos(arr, sizeof(arr)/sizeof(arr[0]), " ") << "'";
    return 0;
}