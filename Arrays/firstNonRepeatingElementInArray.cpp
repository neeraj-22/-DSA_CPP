//Time Complexity -> O(n) <--> Can make O(nlogn) OPTIMISE IT

/* Find first NON - repeating element of an array*/
#include <iostream>
#include<climits>
using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
} 

int findNonRepeatingElement(int arr[], int n){

    int j = n-1;
    int skipIndex = INT_MAX;

    for(int i=0; i<n; j--){

        if(arr[i] == arr[j] || i == skipIndex){
            skipIndex = min(skipIndex, j);
            j = n;
            i++; 
        }
        else if(j == i+1){
            cout << "First Non Repeating Element : " << arr[i] << "\n";
            return 1;
        }

    }
    cout << "No Unique Element found";
    cout << endl;
    
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

    findNonRepeatingElement(arr, n);

    return 0;
}