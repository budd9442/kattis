#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    string l1, l2, l3, l4, l5, l6;
    map<string, int> patterns;
    patterns["*** | * * | * * | * * | *** | "] = 0;
    patterns["  * |   * |   * |   * |   * | "] = 1;
    patterns["*** |   * | *** | *   | *** | "] = 2;
    patterns["*** |   * | *** |   * | *** | "] = 3;
    patterns["* * | * * | *** |   * |   * | "] = 4;
    patterns["*** | *   | *** |   * | *** | "] = 5;
    patterns["*** | *   | *** | * * | *** | "] = 6;
    patterns["*** |   * |   * |   * |   * | "] = 7;
    patterns["*** | * * | *** | * * | *** | "] = 8;
    patterns["*** | * * | *** |   * | *** | "] = 9;

    getline(cin, l1);
    getline(cin, l2);
    getline(cin, l3);
    getline(cin, l4);
    getline(cin, l5);

    int n = (l1.length() + 1) / 4;

    vector<string> numbers;
    string num = "";
    for (int i = 0; i < n; i++)
    {
        numbers.push_back("");
        numbers[i].append(l1.substr(4 * i, 3) + " | ");
        numbers[i].append(l2.substr(4 * i, 3) + " | ");
        numbers[i].append(l3.substr(4 * i, 3) + " | ");
        numbers[i].append(l4.substr(4 * i, 3) + " | ");
        numbers[i].append(l5.substr(4 * i, 3) + " | ");
        if (patterns.find(numbers[i]) == patterns.end())
        {
            printf("BOOM!!");
            return 0;
        }
        num += to_string(patterns[numbers[i]]);
    }

    if (stoi(num) % 6 == 0)
    {
        printf("BEER!!");
    }
    else
    {
        printf("BOOM!!");
    }
    return 0;
}