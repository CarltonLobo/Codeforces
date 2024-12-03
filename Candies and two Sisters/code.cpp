#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, testcases, n;
    cin >> testcases;
    int output[testcases];

    for (int i = 0; i < testcases; i++)
    {
        cin >> n;
        if (n % 2 == 1)
            output[i] = n / 2;
        else
            output[i] = n / 2 - 1;
    }
    for (int i = 0; i < testcases; i++)
    {
        if (output[i] >= 0)
            cout << output[i] << endl;
        else
            cout << 0 << endl;
    }

    return 0;
}