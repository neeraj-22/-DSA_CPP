#include <iostream>

using namespace std;

int main()
{
    int n = 3;
    int arr[3][3];

    cout << "Enter Values : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> arr[i][j];
        }
    } 

    cout << "Feeded Values : \n";
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << arr[i][j] << " ";
        }
            cout << "\n";
    }

    int sum = 0;

        int prevSum ;
    cout << "Sum of Columns : \n" ;
    for(int i=0; i<n; i++){
        prevSum = sum;
        sum = 0; 

        for(int j=0; j<n; j++){
            sum += arr[i][j];
        }
        sum = max(sum, prevSum);
        cout << "SUM OF ROW " << i << " : " << sum << " \n";
    }

        cout << "MAX : " <<  sum << " \n";
    
    return 0;
}