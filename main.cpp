#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int m, n, temp, maxx = 0;
    cin >> m >> n;
    set<int> all_numbers;
    vector<int> current;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        current.push_back(temp);
        maxx = max(maxx, temp);
    }
    for (int j = 0; j < m; j++)
    {
        all_numbers.insert(j + 1);
    }
    for (int item : current)
    {
        all_numbers.erase(item);
    }
    for (int x : all_numbers)
    {
        if (x > maxx)
        {
            current.push_back(x);
        }
        for (int y = 0; y < current.size(); y++)
        {
            if (current[y] > x)
            {
                current.insert(current.begin() + y, x);
                break;
            }
        }
        }
    for (int y : current)
    {
        cout << y << endl;
    }

    return 0;
}