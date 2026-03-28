#include <iostream>
using namespace std;

int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
string days[12] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};

int abs(int n){
    if(n < 0)
        return n * -1;
    return n;
}

int main() {
    int m1, d1, m2, d2;

    cin >> m1 >> d1 >> m2 >> d2;

    int dt1 = d1;
    int dt2 = d2;

    for(int i = 0; i < m1 - 1; i++)
        dt1 += m[i];

    for(int i = 0; i < m2 - 1; i++)
        dt2 += m[i];

    int total = dt2 - dt1;
    if(total < 0){
        total = abs(total);
        total %= 7;
        total = 7 - total;
    }
    else{
        total  %= 7;
    }

    cout << days[total];

    return 0;
}