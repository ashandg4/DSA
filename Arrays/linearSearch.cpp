#include <iostream>
using namespace std;

bool search(int arr[], int size, int element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[10] = {10, 38, 27, 15, 87, 65, 94, 17, 81, 46};

    cout << "Enter the element to be searched: " << endl;
    int element;
    cin >> element;

    bool found = search(arr, 10, element);

    if (found)
    {
        cout << "Element is present" << endl;
    }
    else
    {
        cout << "There's no such element present" << endl;
    }
}