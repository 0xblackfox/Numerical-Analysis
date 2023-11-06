#include<bits/stdc++.h>
using namespace std;
double fun (double x)
{
    return pow(x, 3) - x - 4;
}
int main()
{
    double i, n, lo, hi;
    int t, d = 0;
    cout << "Iteration time?";
    cin >> t;
    cout << "Lower value";
    cin >> lo;
    cout << "Higher value";
    cin >> hi;
    while (t--)
    {
        if ((fun(lo)*fun(hi)) < 0)
        {
            double mid = (lo + hi) / 2;
            cout << "X" << ++d << "=" << mid << endl;
            double ans = fun(lo) * fun(mid);
            if (ans < 0)
            {
                hi = mid;
            }
            else if (ans > 0)
            {
                lo = mid;
            }
            else
            {
                break;
            }
        }
        else
        {
            cout << "Root doesn't exist.\n";
            return 0;
        }
    }
}


