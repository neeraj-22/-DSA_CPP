#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findFixedPoint(int arr[], int n){
    int start = 0, end = n;

    while( start <= end){
        int mid = (start+end)/2 ;

        if(arr[mid] == mid){
            cout << "Fixed Point is : " << mid << "\n";
            return 1;
        }
        else if(arr[mid] < mid){
            start = mid + 1 ;
        }
        else{
            end = mid - 1;
        }
    }

    cout << "No Fixed Point Found \n";
    return 0;
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

    findFixedPoint(arr, n);

    return 0;
}