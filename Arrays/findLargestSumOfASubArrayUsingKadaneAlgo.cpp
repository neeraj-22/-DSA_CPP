/*  KADANE'S ALGO IS USED
    Only used to find max of a subarray
    Time Complexity  : O(n)
    Space Complexity : O(1)
*/

#include<iostream>
#include <climits>

using namespace std;

void findLargestSum(int arr[], int n){
    
    int maxSoFar = INT_MIN;
    int maxEndingHere =  0;

    for(int i=0; i<n; i++){
        
        maxEndingHere += arr[i];
        if(maxSoFar < maxEndingHere){
            maxSoFar = maxEndingHere;
        }
        if(maxEndingHere < 0){
            maxEndingHere = 0;
        }
    }

    cout << "Largest Sum is : " << maxSoFar << "\n";

}

int main(){

    int arr[8] = {-2, -3, 4, -1, -2, 1, 5, -3};

    findLargestSum(arr, 8);

    return 0;
}