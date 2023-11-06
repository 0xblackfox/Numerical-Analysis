#include<bits/stdc++.h>
using namespace std;

double  func(double x)
{
    return x * x;
    //return exp(x)*sin(x);
}


void difference (double x, double h) {

    double f1 = (func(x + h) - func(x)) / h;
    double f2 = (func(x) - func(x - h)) / h;
    double f3 = (func(x + h) - func(x - h)) / (2 * h);



    cout << endl << "First derivative of the function is for two point : " << endl;

    cout << "use forward difference formula : " << f1 << endl;
    cout << "use backward difference formula : " << f2 << endl;
    cout << "use central difference formula : " << f3 << endl;





}

int main ()
{
    double x, h;
    cout << "Enter the value of first point : "; cin >> x;
    cout << "Enter the difference between the point : "; cin >> h;

    difference(x, h);


}