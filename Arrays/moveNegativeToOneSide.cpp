/* Move all negative elements of an array to one side*/
/* Swapping Array Elements using temp variable */

#include <iostream>
#include <bitset>

using namespace std;
 
void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void moveNegativeElementsOfArray(int arr[],  int n){
    int swapPosition = 0;

    for(int i=1; i<n; i++){
        if(arr[i] < 0 ){
            arr[swapPosition] = arr[swapPosition] ^ arr[i];
            arr[i] = arr[swapPosition] ^ arr[i];
            arr[swapPosition] = arr[swapPosition] ^ arr[i];

            swapPosition++;
        }
    }

    cout << "Final Array : " ;
    for(int i = 0; i<n; i++){
        cout << arr[i] << " ";
    }
    
    cout << endl;
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

    moveNegativeElementsOfArray(arr, n);

    return 0;
}