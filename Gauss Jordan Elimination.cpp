#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,k,n; // declare variables and matrixes as
    float a[10][10],b,x[10];
    cout<<"Enter the size of matrix: ";
    cin>>n;
    cout<<"Enter the elements of augmented matrix (rowwise):\ n";
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=(n+1); j++)
        {
            cout << "A[" << i << ", " << j << " ]=";
            cin >> a[i][j];
        }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(i!=j)
            {
                b=a[j][i]/a[i][i];
                for(k=1; k<=n+1; k++)
                {
                    a[j][k]=a[j][k]-b*a[i][k];
                }
            }
        }
    }
    cout<<"\nThe solution is:\n";
    for(i=1; i<=n; i++)
    {
        x[i]=a[i][n+1]/a[i][i];
        cout<<"x"<<i << "="<<x[i]<<" ";
    }
    return 0;
}
