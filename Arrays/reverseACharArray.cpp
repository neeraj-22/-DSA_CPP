#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

void reverseCharArr(char arr[]){
    
    int length = strlen(arr);

    int i=0;
    int end = length-1;

    while(i < end){
        swap(arr[i], arr[end]);
        i++;
        end--;
    }

    cout << arr << "\n";
}

int main(){

    char arr[] = "HEYYYY";

    reverseCharArr(arr);

    return 0;
}