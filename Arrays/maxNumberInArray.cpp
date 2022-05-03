#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findMaximum(int arr[], int n){

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    cout << "Maximum Element : "<< max << endl;
}


int main(){

    int arr[15] ;

    int n;
    cout << "Enter Size of Array : " ;
    cin >> n;

    cout << "Input Array Elements : ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    printArray(arr, n);

    findMaximum(arr, n);

    return 0;
}