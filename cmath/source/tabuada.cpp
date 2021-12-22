#include <iostream>
#include <stdlib.h>

/// ====== RENEECODES ======
/// ====== RENEECODES ======
/// ====== RENEECODES ======

using namespace std;

int main()
{
    cout << "TABUADA DO: " << endl;

    int n = 0;
    cin >> n;

    for (int i = 1; i <= 10; i++)
    {
        cout << i << " x " << n << " = " << i*n << endl;
    }

    system("pause");
    return 0;
}