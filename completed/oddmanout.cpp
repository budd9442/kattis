#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    int n, m;
    long long p;
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        cin >> m;
        map<long long, bool> records;
        for (int j = 0; j < m; j++)
        {
            cin >> p;
            if (records[p] == true)
            {
                records.erase(p);
            }
            else
            {
                records[p] = true;
            }
        }
        printf("Case #%d: %d\n", i, records.begin()->first);
    }
}