#include<bits/stdc++.h>

using namespace std;

void func() {

    int n; cin >> n;


    map<double, double> points;

    for (int i = 0; i < n; i++) {

        double x, y; cin >> x >> y;

        points[x] = y;

    }

    double x; cin >> x;

    int backward = (int)x - 1, forward = (int)(x + 1) + 1;

    double answer = ((points[forward] - points[backward]) /

                     (forward - backward)) *

                    (x - backward) + points[backward];

    cout << "Interpolated value is: " << answer << endl;

}

int main()

{

    func();

}
