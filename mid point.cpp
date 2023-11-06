#include<bits/stdc++.h>
using namespace std;
double func(double x) {
     return x * x;
}
int main()
{
     double lower, upper, integration = 0.0, stepSize, k1, k2, mid;
     double i, subInterval;
     std::cout << std::fixed << std::setprecision(4);
     cout << "Enter lower limit of integration: ";
     cin >> lower;
     cout << "Enter upper limit of integration: ";
     cin >> upper;
     cout << "Enter number of sub intervals: ";
     cin >> subInterval;
     stepSize = (upper - lower) / subInterval;
//cout<<stepSize<<endl;
     k1 = lower;
     while (k2 < upper)
     {
          k2 = k1 + stepSize;
          mid = (k1 + k2) / 2.0;
// cout<<mid<<" ";
          integration = integration + func(mid);
          //cout<<integration<<" ";
          k1 = k2;
     }
     integration = integration * stepSize;
     cout << "Required value of integration is: " << integration << endl;
     return 0;
}
