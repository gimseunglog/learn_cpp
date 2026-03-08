#include <iostream>
using namespace std;

int main() {
    double f = 9.2;
    double m = 1.3;
    cout << fixed;
    cout.precision(1);
    cout << f << "ft = " << f * 30.48 << "cm\n";
    cout << m << "mi = " << m * 160934 << "cm";
    return 0;
}