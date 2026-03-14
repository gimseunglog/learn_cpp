#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int cnt;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a >= 250){
            cnt = i;
            break;
        }
        sum += a;
    }
    double avg;
    if(cnt){
        avg = (double)sum / cnt;
    }
    else{
        avg = 0;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << avg;
    return 0;
}