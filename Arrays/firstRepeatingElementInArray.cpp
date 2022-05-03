//Time Complexity -> O(n) <--> Can make O(nlogn) OPTIMISE IT

/* Find first repeating element of an array*/
#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findRepeatingElement(int arr[], int n){

    int j = n-1;

    for(int i=0; i<j; j--){
            // cout << arr[i] << " " << arr[j] << "\n"; --> Check Iterations

        if(arr[j] == arr[i]){
            cout << "First Duplicate Element : " << arr[i] << "\n";
            return 1;
        }
        else if(j == i+1){
            j = n;
            i += 1;
        }
    }

    cout << "No duplicates found";
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

    findRepeatingElement(arr, n);

    return 0;
}