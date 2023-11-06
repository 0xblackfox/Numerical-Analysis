/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
double mn=INT_MAX;
double mx=INT_MAX;
double xpl,xph;
int low(double x,long long int n,double t[]){
     int index=-1;
     for(int i=0;i<n;i++){
          if(x-t[i]<mn&&t[i]<x){
               mn=x-t[i];
               xpl=t[i];
               index=i;
          }
     }
     return index;
}
int hi(double x,long long int n,double t[]){
     int index=-1;
     for(int i=0;i<n;i++){
          if(t[i]-x<mx&&t[i]>x){
               mx=t[i]-x;
                xph=t[i];
               //cout<<"MX "<<mx<<" t="<<t[i]<<endl;
               index=i;
          }
     }
     return index;
}
int main()
{
    long long int i,n;
    double x,t[100],v[100];
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"T["<<i<<"] = ";
        cin>>t[i];
        cout<<"V["<<i<<"] = ";
        cin>>v[i];
    }
    cout<<"Which valucity i want to know? ";
    cin>>x;
    int low_index=low(x,n,t);
    int hi_index=hi(x,n,t);
    double l0=(x-xph)/(xpl-xph);
    double l1=(x-xpl)/(xph-xpl);
     cout<<"For 1st order valucity is : ";
    cout<<l0*v[low_index]+l1*v[hi_index]<<endl;
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH
