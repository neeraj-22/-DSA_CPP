#include <iostream>
#include <algorithm>

using namespace std;

bool checkIfDouble(int arr[], int n){   

    sort(arr, arr+n);

    int start=0, end=n-1;

    int mid = 0;
    while(start<=end){
        mid = start + (end-start)/2;

        int midElement = 2*arr[mid];

        if(midElement == arr[end]){
            return true;
        }
        else{
            start++;
        }
    }

    return false;

}

int main(){

    int arr[4] = {7, 1, 5, 6};

    if(checkIfDouble(arr, 4)){
        cout << "True \n";
        return 1;
    };

    cout << "False \n";
    return 0;
}