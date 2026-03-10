#include <iostream>
using namespace std;

int main() {
    int a;
    int s = 0;
    int c = 0;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(0 <= a && a <= 200){
            s += a;
            c++;
        }
    }
    double avg = (double)s / c;
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << avg;
    return 0;
}