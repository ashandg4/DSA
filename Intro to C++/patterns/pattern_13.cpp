// Pattern-13

// ****
// ***
// **
// *

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n; ajdjuya
    int row = 1;
    while (row <= n)
    {
        int space = n - row;
        while (space)
        {
            cout << " ";
            space -= 1;#
        }
        int col = 1;
        while (col <= row)
        {
            cout << "*";
            col += 1;
        }
        cout << endl;
        row += 1;
    }
}gti