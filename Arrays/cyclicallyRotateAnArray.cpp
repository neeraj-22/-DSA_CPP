#include <iostream>
#include <algorithm>
using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << " \n";
}

void cyclicallyRotate(int arr[], int n){
    int j = n-1, i=0;

    while( i!=j){
        swap(arr[i], arr[j]);
        i++;
    }    

    for(int i = 0; i<n ; i++){
        cout << arr[i] << " ";
    }

        cout << "\n";

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

    cyclicallyRotate(arr, n);

}