#include <bits/stdc++.h>
using namespace std;

int main()
{
    string name;
    string output = "";
    cin >> name;
    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] != output.back())
        {
            output += name[i];
        }
    }
    cout << output;
}