#include <iostream>
#include <algorithm>

using namespace std;

void printArray(float arr[], int size){
    cout << "Feeded Array : ";
    for(int i = 0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void findMinPlatforms(float arrArrival[], float arrDeparture[], int n){

    sort(arrArrival, arrArrival+n);
    sort(arrDeparture, arrDeparture+n);
    
    int platformsRequired = 1;
    int ans = 0;

    int i=0;
    int j = 0; 

    while(i<n || j<n){
        if(arrArrival[i] < arrDeparture[j]){
            // cout << "Platform++" << "\n";
            platformsRequired++;  
            i++;
        }
        else if(arrArrival[i] > arrDeparture[j]){
            // cout << "Platform--" << "\n";        
            platformsRequired--;
            j++;
        }

        ans = max(ans, platformsRequired);
        // cout << "ANS : " << ans << "\n";
        // cout << "Platform : " << platformsRequired << "\n";
    }

    cout << "Minimum Platform Required : " << ans-1 << "\n";
} 


int main(){

    float arrArrival[6] = {9.00, 9.40, 9.50, 11.00, 15.00, 18.00} ;
    float arrDeparture[6] = {9.10, 12.00, 11.20, 11.30, 19.00, 20.00} ;

    printArray(arrArrival, 6);
    printArray(arrDeparture, 6);

    findMinPlatforms(arrArrival, arrDeparture, 6);

    return 0;

}