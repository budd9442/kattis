#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    freopen("input.txt", "r", stdin);

    while (cin >> n)
    {

        cin.ignore();
        if (n == 0)
        {
            return 0;
        }
        map<string, vector<string>> orders;
        for (int i = 0; i < n; i++)
        {
            string line;
            getline(cin, line);
            stringstream ss(line);
            string customer, food;

            ss >> customer;
            while (ss >> food)
            {
                orders[food].push_back(customer);
            }
        }
        for (auto const &x : orders)
        {
            vector<string> temp = x.second;
            sort(temp.begin(), temp.end());
            cout << x.first << " ";

            for (string item : temp)
            {
                cout << " " << item;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}