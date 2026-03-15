#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    int tmp;
    cout << a << ' ' << b << ' ';
    for(int i = 0; i < 8; i++){
        cout << a + b << ' ';
        tmp = b;
        b = a + b;
        a = b;
    }
    return 0;
}