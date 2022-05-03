#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortArrayByBruteForce(int arr[], int n){
    int countZero = 0;
    int countOne = 0;
    int  countTwo = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            countZero++;
        }
        if(arr[i] == 1){
            countOne++;
        }
        if(arr[i] == 2){
            countTwo++;
        }
    }

    cout << countZero << " " << countOne << " " << countZero << " "<< endl;

    while(countZero --){
        cout << "0" << " ";
    }
    while(countOne --){
        cout << "1" << " ";
    }
    while(countTwo --){
        cout << "2" << " ";
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

    sortArrayByBruteForce(arr, n);

    return 0;
}