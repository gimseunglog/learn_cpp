#include <iostream>
using namespace std;

int m[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
enum days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {
    int m1, d1, m2, d2;
    int day;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> day;

    int dt1 = d1;
    int dt2 = d2;

    for(int i = 0; i < m1; i++){
        dt1 += m[i];
    }
    for(int i = 0; i < m2; i++){
        dt2 += m[i];
    }

    int total = dt2 - dt1;
    int cnt = 0;

    for(int i = 0; i < total; i++){
        if(i % 7 == day){
            cnt++;
        }
    }

    cout << cnt;
    
    return 0;
}