// Sizeof ptr -> 4 for 32-bit and 8 for 64-bit arch

#include <iostream>

using namespace std;

void func(int *p)
{
    p = p + 1;
    cout << "ADDRESS IN FUNCTION : " << p << "\n";

    *p = *p + 1;
    cout << "VALUE IN FUNCTION : " << *p << "\n";
}

int main()
{

    // int a = 3;

    // Prints address of a
    // cout << &a << "\n";

    // Intialises a pointer b which stores address of a
    // int *b = &a;

    // int size = sizeof(b);

    // Adding a star to deref the value -- Else it'd just print the address
    // cout << *b << " " << size << "\n";

    /*
    Throws segmentation fault --> Tried to access memory location which doesnt exist
    int *p = 0; Also called Null
    cout << *p << "\n";
    */

    /*
    Dangling Pointer :
    int *p
    //Randomly points to a memory address and leads to memory leak
    */

    // func(b);

    // cout << "Address after function : " << b << "\n";
    // cout << "Value after function : " << *b << "\n";


    //******************** PTR IN ARRAYS ******************
    int arr[3] = {1,2,3};

    cout << arr << " " << &arr << "\n";
    cout << *arr << "\n";

    cout << *(arr+1) << "\n";
    cout << *(arr+2) << "\n";


    for(int i=0; i<3; i++){
        cout << i[arr] << " ";

        /* 
        *(arr+i) = *(i+arr)
          arr[i] = i[arr]
        */
    }

    cout << "\n";

    char ch[]= "abcd efgh";
    char *ptr = ch;
    
    cout << ptr << "\n"; //prints whole string
    cout << *ptr << "\n"; //Prints a 
    cout << &ptr << "\n"; //Prints address

    return 0;
}
