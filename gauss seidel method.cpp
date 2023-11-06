/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
double f1(double y,double z)
{
   double x=b[1]-a[1][2]*y-a[1][3]*z;
    x=x/a[1][1];
    return x;
}
double f2(double x,double z)
{
    double y=b[2]-a[2][1]*x-a[2][3]*z;
    y=y/a[2][2];
    return y;
}
double f3(double x,double y){
     double z=b[3]-a[3][1]*x-a[3][2]*y;
     z=z/a[3][3];
     return z;
}
int main()
{
    optimize();
    // freopen("a.txt","r",stdin);freopen("b.txt","w",stdout);
    long long int t,i,n;
    double a[100][100],b[100],x=0,y=0,z=0,e1,e2,e3,e,x1,y1,z2;
    cout<<"Enter the number of unknown variables : "<<endl;
    cin>>n;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
        cout<<"B["<<i<<"] = ";
        cin>>b[i];
    }
    if(a[1][1]>a[1][2]+a[1][3]&&a[2][2]>a[2][1]+a[2][3]&&a[3][3]>a[3][1]+a[3][2])
    {
        cout<<"Diagonally Dominant Matrix.So Gauss Seidel Method is possible.\n";
        cout<<"Enter tolerable error: ";
        cin>>e;
        do
        {
            x1=f1(y,z);
            y1=f2(x1,z);
            z1=f3(x1,y1);
            e1 = fabs(x-x1);
            e2 = fabs(y-y1);
            e3 = fabs(z-z1);
            x=x1;
            y=y1;
            z=z1;
        }
        while(e1>e&&e2>e&&e3>e);
        cout<<"Solution : x = "<<x1<<" ,y = "<<y1<<" , z = "<<z1<<endl;
    }
    else
    {
        cout<<"Not Diagonally Dominant Matrix.So Gauss Seidel Method isn't possible.\n";
    }
//std::cout << std::fixed << std::setprecision(2);
}
/// ALHAMDULILLAH




