#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: " << endl;
    cin >> n;

    bool isPrime = 1;

    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            // cout << "not a prime" << endl;
            isPrime = 0;
            break;
        }
    }

    if (isPrime == 0)
    {
        cout << "Not a prime number" << endl;
    }
    else
    {
        cout << "Prime number" << endl;
    }
}