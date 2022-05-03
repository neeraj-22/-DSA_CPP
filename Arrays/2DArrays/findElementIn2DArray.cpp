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
    
    int findNum;
    cout << "Enter Number to Find : ";
    cin >> findNum;

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(arr[i][j] == findNum){
                cout << "Target found at index : (" << i << ", " << j << ")" << endl;
                return 1; 
            }
        }
    }

    cout << "Target not found. \n";

    return 0;
}