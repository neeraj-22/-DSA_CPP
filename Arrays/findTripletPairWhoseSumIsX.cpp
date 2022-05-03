//Time Complexity O(n3) -- Optimisation required

/* Given an array and a value, find if there is a triplet in array whose sum is 
    equal to the given value. If there is such a triplet present in array, then print 
    the triplet and return true. Else return false.
*/

#include <iostream>

using namespace std;

void printArray(int arr[], int size)
{
    cout << "Feeded Array : ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findPair(int arr[], int n, int sumToFind)
{

    for (int i = 0; i < n-2; i++)
    {
        for(int j = i+1; j < n-1; j++){
            for(int k = j+1; k<n; k++){
                if(arr[i] + arr[j] + arr[k] == sumToFind){
                    cout << "Elements are : " << arr[i] << ", " << arr[j] << ", " << arr[k] << "\n";
                    return 1;
                }
            }
        }
    }

    cout << "No Triplet Pair found" << endl;
    return 0;
}

int main()
{

    int arr[15];

    int n;
    cout << "Enter Size of Array : ";
    cin >> n;

    cout << "Input Array Elements : ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);

    int sumToFind;

    cout << "Enter Sum you wish to Find : ";
    cin >> sumToFind;

    findPair(arr, n, sumToFind);

    return 0;
}