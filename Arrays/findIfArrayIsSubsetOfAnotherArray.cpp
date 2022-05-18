#include <iostream>

using namespace std;

bool findIfSubset(int arr1[], int arr2[], int n, int m){

    int similarElementCount = 0;
    int j = 0;

    for(int i = 0; i < n; i++){
        if(similarElementCount == m){
            return true;
        }

        if(arr1[i] == arr2[j]){
            similarElementCount++;
            j++;
            i = -1;
        }
    }

    return false;
}

int main(){

    int arr1[5] = {10, 5, 2, 23, 19};
    int arr2[3] = {19, 5, 3};

    bool check = findIfSubset(arr1, arr2, 5, 3);

    if(check == true){
        cout << "Yes \n";
    }
    else{
        cout << "No \n";
    }
    
    return 0;
}