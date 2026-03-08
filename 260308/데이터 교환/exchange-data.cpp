#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int b = 6;
    int c = 7;
    int tmp1, tmp2;
    tmp1 = b;
    b = a;
    tmp2 = c;
    c = tmp1;
    a = tmp2;
    cout << a << endl << b << endl << c;
    return 0;
}