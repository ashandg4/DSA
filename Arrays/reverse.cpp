#include <iostream>
using namespace std;

void reverse(int arr[], int size)
{

    int start = 0;
    int end = size - 1;

    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        // swap(arr[start], arr[end]);   simpler method
        start++;
        end--;
    }
}

void printArray(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr1[6] = {1, 2, 3, 4, 5, 6};
    int arr2[5] = {10, 20, 30, 40, 50};

    reverse(arr1, 6);
    reverse(arr2, 5);

    cout << "Reversed array1: " << endl;
    printArray(arr1, 6);

    cout << "Reversed array2: " << endl;
    printArray(arr2, 5);
}