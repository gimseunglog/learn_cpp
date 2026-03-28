#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    int m1, m2;

    cin >> a >> b >> c;

    m1 = 11 * 24 * 60;
    m1 += 11 * 60 + 11;
    m2 = a * 24 * 60;
    m2 += b * 60 + c;
    int df = m2 - m1;
    if(df < 0){
        df = -1;
    }
    cout << df;

    return 0;
}