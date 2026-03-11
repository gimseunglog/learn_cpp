#include <iostream>
using namespace std;

int main() {
    int a;
    int s = 0;
    int c = 0;
    while(1){
        cin >> a;
        if(a / 10 != 0){
            break;
        }
        s += a;
        c++;
    }
    cout << fixed;
    cout.precision(2);
    cout << (double)s / c;
    return 0;
}