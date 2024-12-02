#include <bits/stdc++.h>
using namespace std;

int main()
{
    int stones, output = 0;
    string colour;
    cin >> stones >> colour;
    for (int i = 0; i < stones - 1; i++)
    {
        if (colour[i] == colour[i + 1])
        {
            output++;
        }
    }
    cout << output;
    return 0;
} // namespace std;
