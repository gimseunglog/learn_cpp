#include <iostream>

using namespace std;

int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    int m1, m2, d1, d2;
    cin >> m1 >> d1 >> m2 >> d2;
    int dt1 = d1;
    int dt2 = d2;
    for(int i = 0; i < m1 - 1; i++){
        dt1 += m[i];
    }
    for(int i = 0; i < m2 - 1; i++){
        dt2 += m[i];
    }
    cout << dt2 - dt1 + 1;
    return 0;
}