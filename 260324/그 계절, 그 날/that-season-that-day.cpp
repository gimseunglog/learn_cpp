#include <iostream>
using namespace std;

bool is_leap(int y){
    if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){
        return true;
    }
    else{
        return false;
    }
}

int days_cnt(int y, int m){
    if(m == 2){
        return (is_leap(y)) ? 29 : 28;
    }
    else if(m == 4 || m == 6 || m == 9 || m == 11){
        return 30;
    }
    else{
        return 31;
    }
}

bool judge(int y, int m, int d){
    return (d <= days_cnt(y, m));
}

void season(int m){
    if(3 <= m && m <= 5){
        cout << "Spring";
    }
    else if(6 <= m && m <= 8){
        cout << "Summer";
    }
    else if(9 <= m && m <= 11){
        cout << "Fall";
    }
    else{
        cout << "Winter";
    }
}

int main() {
    int y, m, d;
    cin >> y >> m >> d;
    if(judge(y, m, d)){
        season(m);
    }
    else{
        cout << -1;
    }
    return 0;
}