#include <iostream>
using namespace std;

int abs(int n){
    if(n < 0)
        return n * -1;
    return n;
}

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int m1 = a * 60 + b;
    int m2 = c * 60 + d;
    cout << abs(m1 - m2);
    return 0;
}