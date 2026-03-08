#include <iostream>
using namespace std;

int main() {
    int w = 13;
    float mg = 0.165;
    cout << fixed;
    cout.precision(6);
    cout << w << " * " << mg << " = " << w * mg;
    return 0;
}