#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s = 0;
    for(int i = 0; i < N; i++){
        int a;
        cin >> a;
        s += a;
    }
    cout << fixed;
    cout.precision(1);
    cout << s << ' ' << (double)s / N;
    return 0;
}