#include <bits/stdc++.h>
using namespace std;

int main()
{
    int students, time;
    cin >> students >> time;
    string line, output;
    cin >> line;
    output = line;
    for (int i = 0; i < time; i++)
    {
        for (int j = 0; j < students; j++)
        {
            if ((line[j] == 'B') && (line[j + 1] == 'G'))
            {
                output[j] = 'G';
                output[j + 1] = 'B';
            }
            else
                output[j] = line[j];
        }
        line = output;
    }
    cout << output;
    return 0;
}