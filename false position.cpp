/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
double func(double x){
     return x*x-x-1;
}
int main()
{
     long long int t,i,n,d=0;
     double lo,hi,mid;
     cout<<"Lower value : ";
     cin>>lo;
     cout<<"Higher value : ";
     cin>>hi;
     cout<<"Iteration time? : ";
     cin>>t;
     while(t--){
     if(func(lo)*func(hi)<0){
          mid=func(lo)*(lo-hi);
          mid=mid/(func(lo)-func(hi));
          mid=lo-mid;
          cout<<"mid"<<++d<<" = "<<mid<<endl;
          double ans=func(lo)*func(mid);
          if(ans<0){
               hi=mid;
          }
          else if(ans>0){
               lo=mid;
          }
          else{
               break;
          }
     }
     else{
          cout<<"root doesn't exist.\n";
     }
     }

//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
