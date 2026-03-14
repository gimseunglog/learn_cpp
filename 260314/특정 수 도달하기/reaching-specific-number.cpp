#include <iostream>
using namespace std;

int main() {
    int a;
    int sum = 0;
    int cnt = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a >= 250){
            for(int j = i; j < 10; j++){
                cin >> a;
            }
            break;
        }
        cnt++;
        sum += a;
    }
    cout << fixed;
    cout.precision(1);
    double avg;
    avg = (double)sum / cnt;
    cout << sum << ' ' << avg; 
    return 0;
}