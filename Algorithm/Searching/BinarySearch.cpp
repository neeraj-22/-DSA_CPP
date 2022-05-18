#include <iostream>

using namespace std;

int binarySearch(int array[], int size, int element){
  int start = 0, end = size ;
  

  while(start<=end){
      
      int mid = (start+end)/2;
      if(array[mid]==element){
          return mid;
      }
      else if(array[mid] < element){
          start = mid + 1;
      }
      else if(array[mid] > element){
          end = mid - 1;
      }

  }

  cout << "Error " ;
  return 404;

}

int main(){

    int size;
    cout << "Enter size of array : " ;
    cin >> size;

    int array[size];
    cout << "Enter elements in array : " << endl ;

    for(int i = 0; i < size; i++){
        cin >> array[i]; 
    }

    int element;
    cout << "Enter the element you want to find : ";
    cin >> element;

    cout << "Index of element: " << binarySearch(array, size, element);
    cout << endl ;

    return 0;
}


//Time complexity -> O(log n)
