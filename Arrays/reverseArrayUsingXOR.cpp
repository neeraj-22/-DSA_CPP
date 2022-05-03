/* Swapping Array Elements using XOR */

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
  
void reverseTheArray(int arr[],  int n){
    int j = n-1 ;

    for(int i=0; i<j; i++){
        arr[i] = arr[i] ^ arr[j];
        arr[j] = arr[i] ^ arr[j];
        arr[i] = arr[i] ^ arr[j];        
        j--;
    }

    cout << "Reversed Array : " ;
    for(int i=0; i<n; i++){
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

    reverseTheArray(arr, n);

    return 0;
}