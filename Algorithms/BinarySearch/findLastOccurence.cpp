#include <iostream>

using namespace std;

void printArray(int arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void doBinarySearch(int arr[], int n, int target){

    int start = 0, end=n;

    int ans = 0;
    while(start <= end){
        int mid = (start+end)/2;

        if(arr[mid] == target){
            ans = mid;
            start = mid+1;
        }
        else if(arr[mid] < target){
            start = mid + 1; 
        }
        else{
            end = mid -1;
        }
    }

    cout << ans << "\n";
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

    int target;
    cout << "ENTER TARGET : ";
    cin >> target;
    doBinarySearch(arr, n, target);

    return 0;
}