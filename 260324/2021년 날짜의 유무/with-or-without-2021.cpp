#include <iostream>
using namespace std;
int month[12] = {31, 28, 31, 30 , 31, 30, 31, 31, 30, 31, 30, 31};

bool check_days(int m, int d){
    if(m <= 12){
        return (d <= month[m - 1]);
    }
    else{
        return false;
    }
}
 
int main() {
    int M, D;
    cin >> M >> D;
    if(check_days(M, D)){
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    return 0;
}