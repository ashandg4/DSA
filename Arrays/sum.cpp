#include <iostream>
using namespace std;

int printSum(int arr[], int size)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        count += arr[i];
    }
    return count;
}

int main()
{
    int n;
    cout << "size of array: " << endl;
    cin >> n;
    int num[100];

    for (int i = 0; i < n; i++)
    {
        cin >> num[i];
    }

    cout << "sum of elements in the array: " << printSum(num, n) << endl;
}