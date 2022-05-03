/* Given an array f N+1 integers and its values lie within 1-N
   Find the duplicate element
*/

#include <iostream>
#include <numeric>

using namespace std;

void printArray(int arr[], int size)
{
    cout << "Feeded Array : ";
    for (int i = 0; i <= size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findDuplicate(int arr[], int n)
{

    int expectedSum = (n * (n + 1) / 2);
    int calculatedSum = accumulate(arr, arr + n + 1, 0);

    cout << "Duplicate Element : " << calculatedSum - expectedSum << " \n";

}

int main()
{

    int arr[15];

    int n;
    cout << "Enter Size of Array (N) : ";
    cin >> n;

    cout << "Input Array Elements : (Make sure its between 1 - N) \n";
    for (int i = 0; i <= n; i++)
    {
        cin >> arr[i];
    }

    printArray(arr, n);

    findDuplicate(arr, n);

    return 0;
}