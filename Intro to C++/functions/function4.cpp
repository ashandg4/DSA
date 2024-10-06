#include <iostream>
using namespace std;

// 0--> not a prime number
// 1--> prime number

bool isPrime(int n)
{
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            return 0;
        }
    }
    return 1;
}

int main()
{
    int n;
    cin >> n;

    if (isPrime(n))
    {
        cout << " id a prime no." << endl;
    }
    else
    {
        cout << "not a prime no." << endl;
    }
}