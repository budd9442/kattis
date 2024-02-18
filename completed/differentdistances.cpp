#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main()
{
    double x1, y1, x2, y2, p;
    while (cin >> x1)
    {
        if (x1 == 0)
            return 0;
        cin >> y1 >> x2 >> y2 >> p;
        double p1 = pow(abs(x1 - x2), p);
        double p2 = pow(abs(y1 - y2), p);
        double output = pow(p1 + p2, 1 / p);
        cout << setprecision(12);
        cout << output << endl;
    }
}