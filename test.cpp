#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> items{"Alice", "Sue", "David"};
    for (string x : items)
    {
        cout << x << " ";
    }
    cout << endl;
    sort(items.begin(), items.end());
    for (string x : items)
    {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}