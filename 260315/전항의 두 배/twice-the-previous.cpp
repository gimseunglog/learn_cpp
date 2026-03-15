#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    cout << a << ' ' << b << ' ';
    int tmp;
    for(int i = 0; i < 8; i++){
        cout << (2 * a) + b << ' ';
        tmp = b;
        b = (2 * a) + b;
        a = tmp;
    }
    return 0;
}