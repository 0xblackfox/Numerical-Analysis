/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define epsilon 0.01
double func(double x)
{
    return x * x - 3;
}
int main()
{
    long long int t, i, n, a, b;
    double mid, lo, hi;
    cout << "Lower value : ";
    cin >> lo;
    cout << "Higher value : ";
    cin >> hi;
    if (func(lo)*func(hi) >= 0)
    {
        cout << "root doesn't exist.\n";
    }
    else
    {
        while ((hi - lo) >= epsilon)
        {
            mid = func(lo) * (lo - hi);
            mid = mid / (func(lo) - func(hi));
            mid = lo - mid;
            double ans = func(lo) * func(mid);
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
        cout << "The root is = " << mid << endl;
    }
}
/// ALHAMDULILLAH
