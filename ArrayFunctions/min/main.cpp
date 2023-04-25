#include <iostream>
using namespace std;

int min(int arr[], int size){
    int current_min = arr[0];
    for(int i = 1; i < size; i++){
        if(arr[i] < current_min){
            current_min = arr[i];
        }
    }
    return current_min;
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min_num = min(arr, size);
    cout << min_num;
    return 0;
}