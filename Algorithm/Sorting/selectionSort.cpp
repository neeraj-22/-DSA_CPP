/* InPlace 

    Space Complexity - O(1)
    Time Complexity - O(n2)

    *** Useful only when space constraint has to be taken care of ***

*/

#include <iostream>
#include <algorithm>

using namespace std;


void doSelectionSort(int arr[], int n){

    for(int i=0; i<n-1; i++){

    int minimumElement = arr[i];
        
        for(int j=i+1; j<n; j++){
            if(arr[i] > arr[j]){
                swap(arr[i], arr[j]);
            }
        }
    }
}

void printArray(int arr[], int n){
    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[10] = {1, 3, 4, 5, 2, 9, 11, 15, 12, 11};

    doSelectionSort(arr, 10);
    printArray(arr, 10);

    return 0;
}

