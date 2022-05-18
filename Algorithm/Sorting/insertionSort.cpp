/*

    Space Complexity - O(1)
    Time Complexity - O(n2) [Worst Case]
    Time Complexity - O(n)  [Best Case]

    *** It involves shifting of elements ***

*/

#include <iostream>
#include <algorithm>

using namespace std;

void doInsertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];

        int j = i - 1;

        for (j; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
            {
                break;
            }
        }

        arr[j + 1] = temp;
    }
}

void printArray(int arr[], int n)
{
    cout << "Sorted Array : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{

    int arr[10] = {1, 3, 4, 5, 2, 9, 17, 15, 12, 11};

    doInsertionSort(arr, 10);
    printArray(arr, 10);

    return 0;
}
