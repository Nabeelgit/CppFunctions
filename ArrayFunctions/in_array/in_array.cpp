#include <iostream>
using namespace std;

bool in_array(auto arr[], auto item, int size){
    for(int i = 0; i < size; i++){
        if(item == arr[i]) {
            return true;
        }
    }
    return false;
}

int main(){
    string arr[] = {"Hello", "Hi", "Hey"};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << in_array(arr, "Hi", size);
    return 0;
}