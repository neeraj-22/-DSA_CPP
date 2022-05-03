//Do it

#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int checkPalindrome(int arr[], int n){
    int j = n-1;

    for(int i=0; i<j; i++){
        if(arr[i] == arr[j]){
            j--;
        }
        else{
            cout << "Please provide a palindrome Array." << endl;
            return 0;
        }
    }   
    cout << "Success" << endl ;
    return 1;
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

    checkPalindrome(arr, n);

    return 0;
}