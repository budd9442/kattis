#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> items;
    set<string> output;
    string temp;
    while (cin >> temp)
    {
        items.push_back(temp);
    }
    for (int i = 0; i < items.size(); i++)
    {
        for (int j = i + 1; j < items.size(); j++)
        {
            output.insert(items[i] + items[j]);
            output.insert(items[j] + items[i]);
        }
    }
    vector<string> vc(output.size());
    copy(output.begin(), output.end(), vc.begin());

    sort(vc.begin(), vc.end());
    for (auto k : vc)
    {
        cout << k << endl;
    }
}