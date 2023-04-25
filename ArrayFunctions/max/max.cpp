#include <iostream>
using namespace std;

int max(int arr[], int size){
    int current_max = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] > current_max){
            current_max = arr[i];
        }
    }
    return current_max;
}

int main(){
    int arr[] = {3, 5, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int max_num = max(arr, size);
    cout << max_num;
    return 0;
}