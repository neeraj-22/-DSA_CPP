/* Given an array of integers arr, return true
if the number of occurrences of each value in the
array is unique, or false otherwise. -- LEETCODE */

#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>

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

bool findUniqueOccurence(int arr[], int n)
{

    int uniqueNumbers = 1;

    int countOccurences = 1;

    int countArr[n];
    int countArrPtr = 0;

    sort(arr, arr + n);
    for (int i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            countArr[countArrPtr] = countOccurences;
            countArrPtr++;
            countOccurences = 1;
            uniqueNumbers++;
        }
        else
        {
            countOccurences++;
        }
    }

    for (int i = 0; i < uniqueNumbers - 1; i++)
    {
        for (int j = i + 1; j < uniqueNumbers; j++)
        {
            if (countArr[i] == countArr[j])
            {
                cout << "FALSE \n";
                return false;
            }
        }
    }

    cout << "TRUE \n";
    return true;
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

    findUniqueOccurence(arr, n);

    return 0;
}