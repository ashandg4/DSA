#include <iostream>
using namespace std;

// HOLD
void printArray(int arr[], int size)
{
    cout << "printing the array " << endl;
    // print the array
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "printing done  " << endl;
}

int main()
{
    // declare
    int number[15];

    // accessing an array
    cout << "Value at 14 index: " << number[14] << endl;

    // cout<<"Value at 14 index"<<number[14]<<endl;

    // initialising an array
    int second[3] = {5, 7, 11};

    // accessing an element
    cout << "Value at 2 index: " << second[2] << endl;

    int third[15] = {2, 7};

    int n = 15;
    // printArray(third, 15);

    // initialisation all locations with 0
    int fourth[10] = {0};

    n = 10;
    // printArray(fourth, 10);

    // initialisation all locations with 1 [not possible with below code]
    int fifth[10] = {1};

    n = 10;
    // printArray(fifth, 10);

    cout << endl
         << "Everything is fine " << endl
         << endl;

    int fifthsize = sizeof(fifth) / sizeof(int);
    cout << "Size of fifth is: " << fifthsize << endl;

    // char array
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    cout << ch[3] << endl;

    cout << "printing the array " << endl;
    // print the array
    for (int i = 0; i < 5; i++)
    {
        cout << ch[i] << " ";
    }
    cout << "printing done  " << endl;

    double firstDoubt[5];
    float firstFloat[5];
    bool firstBool[5];

    cout << endl
         << "Everything is fine" << endl
         << endl;
}