/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
double func(double x)
{
    return x*x*x-20;
}
int main()
{
    long long int t,i,n,d=1;
    double x0,x1;
    cout<<"Enter 1st and 2nd value : ";
    cin>>x0>>x1;
    cout<<"Iteration type: ";
    cin>>t;
    while(t--)
    {
         double r=func(x1)*(x1-x0),p=func(x1)-func(x0);
        double mid=x1-r/p;
        cout<<"X"<<++d<<" = "<<mid<<endl;
        x0=x1;
        x1=mid;
    }
}
/// ALHAMDULILLAH




