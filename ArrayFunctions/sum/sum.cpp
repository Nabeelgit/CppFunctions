#include <iostream>
using namespace std;

int sum(int arr[], int size){
    int total = 0;
    for(int i = 0; i < size; i++){
        total += arr[i];
    }
    return total;
}

int main(){
    int arr[] = {1, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int total = sum(arr, size);
    cout << total;
    return 0;
}