#include <iostream>
using namespace std;

int main() {
    int n;
    int sum = 0;
    int i = 0;
    while(i < 10){
        cin >> n;
        if(n == 0){
            break;
        }
        sum += n;
        i++;
    }
    cout << fixed;
    cout.precision(1);
    cout << sum << ' ' << (double)sum / i;
    return 0;
}