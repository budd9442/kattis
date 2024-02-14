#include <bits/stdc++.h>
using namespace std;

int main()
{
    int temp;
    string line;
    int count = 0;
    while (getline(cin, line))
    {
        count++;
        stringstream ss(line);
        ss >> temp;
        int maxx = -1000001, minn = 1000001, k = 0;
        while (ss >> k)
        {
            minn = min(minn, k);
            maxx = max(maxx, k);
        }
        printf("Case %d: %d %d %d\n", count, minn, maxx, maxx - minn);
    }
    return 0;
}