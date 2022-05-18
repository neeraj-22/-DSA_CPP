#include <iostream>
#include <algorithm>

using namespace std;

void findMajorityElement(int arr[], int n)
{

    sort(arr, arr + n);

    int count = 1;
    int maxCount = 0;
    int maxCountElement = 0;

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] != arr[i + 1])
        {
            count = 1;
        }
        else
        {
            count++;
        }

        if (count > maxCount)
        {

            maxCount = max(maxCount, count);
            maxCountElement = arr[i];
        }
    }

    if (maxCount > (n / 2))
    {
        cout << "Majority Element in Array is : " << maxCountElement << "\n";
    }
    else
    {
        cout << "No majority Element found in Array \n";
    }
}
int main()
{

    int arr[9] = {3, 3, 4, 2, 4, 4, 2, 4, 4};

    findMajorityElement(arr, 9);

    return 0;
}