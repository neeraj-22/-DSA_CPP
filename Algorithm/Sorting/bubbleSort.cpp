/* 

    Space Complexity - O(1)
    Time Complexity - O(n2) [Worst Case]
    Time Complexity - O(n)  [Best Case]

    *** ith largest element reaches end in ith round ***

*/

#include <iostream>
#include <algorithm>

using namespace std;


void doBubbleSort(int arr[], int n){

    int swapCount = 0;
    for(int i = 0; i < n-1; i++){
        bool isSwapped = false;
    
        for(int j=0; j<n-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
                isSwapped = true;
                swapCount++;
            }
        }
        if(!isSwapped){
            break;
        }
    }

    cout << "Swap Count : " << swapCount << "\n";
}

void printArray(int arr[], int n){
    cout << "Sorted Array : ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main(){

    int arr[10] = {1, 3, 4, 5, 2, 9, 17, 15, 12, 11};
    // int arr[5] = {1, 2, 3, 4, 5};
    doBubbleSort(arr, 10);
    printArray(arr, 10);

    return 0;
}

