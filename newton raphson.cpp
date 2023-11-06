/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
double func(double x){
  return x*x*x-20;
}
double func2(double x){
     return 3*x*x;
}
int main()
{
     double t,i,n,x,d=0,mid;
     cout<<"Iteration time? ";
     cin>>t;
     cout<<"Initial value ";
     cin>>x;
     while(t--){
       mid=x-(func(x)/func2(x));
       cout<<"x"<<++d<<" = "<<mid<<endl;
       x=mid;
     }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




