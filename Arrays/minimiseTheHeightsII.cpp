#include <iostream>
#include <climits>

using namespace std;

int minimiseHeights(int arr[], int n, int k){
    
    int minElement = INT_MAX;
    int maxElement = INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]<=k){
            arr[i] += k;
        }
        if(arr[i] > maxElement){
            arr[i] -= k;
        }
        if(arr[i] < minElement){
            arr[i] += k;
        }

        else{
            arr[i] -= k;
        }

        maxElement = max(maxElement, arr[i]);
        minElement = min(minElement, arr[i]);
    }

    return maxElement-minElement;
}

int main(){

    int arr[5] = {3, 9, 12, 16, 20};

    cout << "Minimum Difference : " << minimiseHeights(arr, 5, 3) << "\n";

    return 0;
}