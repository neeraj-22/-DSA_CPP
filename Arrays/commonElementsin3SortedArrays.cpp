// C++ program to print common elements in three arrrays
#include <bits/stdc++.h>
using namespace std;

void findCommonElements(int arr1[], int arr2[], int arr3[], int n1, int n2, int n3)
{

    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2 && k < n3)
    {
        if (arr1[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr1[i] << " ";
            i++;
            j++;
            k++;
        }
        else if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}

int main()
{

    int arr1[6] = {1, 5, 10, 20, 40, 80};
    int arr2[5] = {6, 7, 20, 80, 100};
    int arr3[8] = {3, 4, 15, 20, 30, 70, 80, 120};

    cout << "Common Elements are  : ";
    findCommonElements(arr1, arr2, arr3, 6, 5, 8);

    cout << endl;
    return 0;
}
