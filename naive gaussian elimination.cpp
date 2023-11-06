/// BISMILLAHIR RAHMANIR RAHIM
#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    long long int i,j,n,k;
    double a[100][100],b[100];
    cout<<"Enter the number of unknown variables : "<<endl;
    cin>>n;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"] = ";
            cin>>a[i][j];
        }
        cout<<"B["<<i<<"] = ";
        cin>>b[i];
    }
    for(i=0; i<n; i++)
    {
//               double r=a[i][i];
//          for(j=0;j<n;j++){
//               a[i][j]=a[i][j]/r;
//          }
//      b[i] = b[i]/r;
        for(j=i+1; j<n; j++)
        {
            double r=a[i][j]/a[i][i];
            for(k=0; k<n; k++)
            {
                a[j][k]=a[j][k]-r*a[i][k];
            }
            b[j] = b[j] - r*b[i];
        }
    }
    cout<<"The solution is : "<<endl;
for(int i=0;i<n;i++)
{
    cout<<"X["<<i<<"] = "<<b[i]<<endl;
}
}
/// ALHAMDULILLAH




