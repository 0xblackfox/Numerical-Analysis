//Simpson's 1/3rd Rule for Evaluation of Definite Integrals
#include<iostream>
#include<cmath>
using namespace std;
double f(double x)
{
    double a = 1 / (1 + x * x); //write the function whose definite integral is to be calcuated here
    return a;
}
int main()
{   cout.precision(5);        //set the precision
    cout.setf(ios::fixed);
    int n, i;           //n is for subintervals and i is for loop
    double a, b, c, h, sum = 0, integral;
    cout << "\nEnter the limits of integration,\n\nInitial limit,a= ";
    cin >> a;
    cout << "\nFinal limit, b=";              //get the limits of integration
    cin >> b;
    cout << "\nEnter the no. of subintervals(IT SHOULD BE EVEN), \nn=";      //get the no. of subintervals
    cin >> n;
    double x[n + 1], y[n + 1];
    h = (b - a) / n;                  //get the width of the subintervals
    for (i = 0; i < n + 1; i++)
    {   //loop to evaluate x0,...xn and y0,...yn
        x[i] = a + i * h;          //and store them in arrays
        y[i] = f(x[i]);
    }
    for (i = 1; i < n; i += 2)
    {
        sum = sum + 4.0 * y[i];          //loop to evaluate 4*(y1+y3+y5+...+yn-1)
    }
    for (i = 2; i < n - 1; i += 2)
    {
        sum = sum + 2.0 * y[i];                /*loop to evaluate 4*(y1+y3+y5+...+yn-1)+
                                        2*(y2+y4+y6+...+yn-2)*/
    }
    integral = h / 3.0 * (y[0] + y[n] + sum); //h/3*[y0+yn+4*(y1+y3+y5+...+yn-1)+2*(y2+y4+y6+...+yn-2)]
    cout << "\nThe definite integral  is " << integral << "\n" << endl;
    return 0;
}