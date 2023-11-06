#include<iostream>
#include<math.h>
int f(int x){
     return 1/(1+x*x);
}
using namespace std;
int main()
{
 float lower, upper, integration=0.0, stepSize, k;
 int i, subInterval;
 cout<<"Enter lower limit of integration: ";
 cin>>lower;
 cout<<"Enter upper limit of integration: ";
 cin>>upper;
 cout<<"Enter number of sub intervals: ";
 cin>>subInterval;
 stepSize = (upper - lower)/subInterval;
 integration = f(lower) + f(upper);
 for(i=1; i<= subInterval-1; i++)
 {
  k = lower + i*stepSize;
  if(i%2==0){
   integration = integration + 2 * (f(k));
  }
  else{
     integration = integration + 4 * (f(k));
  }
 }
 integration = integration * stepSize/3;

 cout<<"Required value of integration is: "<< integration<<endl;

 return 0;
}
