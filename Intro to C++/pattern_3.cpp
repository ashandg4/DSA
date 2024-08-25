// Pattern-3
// 3 2 1
// 3 2 1
// 3 2 1

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int j = n;
        while (j >= 1)
        {
            cout << j;
            j = j - 1;
        }
        i += 1;
        cout << endl;
    }
}