#include <bits/stdc++.h>
#include <math.h>
using namespace std;
bool cmp(string x, string y)
{

    {
        return (x.substr(0, 2) < y.substr(0, 2));
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    string temp;
    int n;
    while (cin >> n)
    {
        vector<string> names;
        for (int i = 0; i < n; i++)
        {

            cin >> temp;
            names.push_back(temp);

            stable_sort(names.begin(), names.end(), cmp);
        }
        for (string name : names)
        {
            cout << name << endl;
        }
        cout << endl;
    }
    return 0;
}