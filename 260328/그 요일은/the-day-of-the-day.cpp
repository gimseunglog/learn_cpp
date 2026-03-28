#include <iostream>
using namespace std;

int m[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
enum days {Mon, Tue, Wed, Thu, Fri, Sat, Sun};

int main() {
    int m1, d1, m2, d2;
    string s;
    int day;

    cin >> m1 >> d1 >> m2 >> d2;
    cin >> s;

    if(s == "Mon") day = Mon;
    else if(s == "Tue") day = Tue;
    else if(s == "Wed") day = Wed;
    else if(s == "Thu") day = Thu;
    else if(s == "Fri") day = Fri;
    else if(s == "Sat") day = Sat;
    else if(s == "Sun") day = Sun;

    int dt1 = d1;
    int dt2 = d2;

    for(int i = 0; i < m1 - 1; i++)
        dt1 += m[i];

    for(int i = 0; i < m2 - 1; i++)
        dt2 += m[i];

    int total = dt2 - dt1 - day;

    int cnt = 0;

    while(total >= 0){
        cnt++;
        total -= 7;
    }

    cout << cnt;

    return 0;
}