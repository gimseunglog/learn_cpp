#include <iostream>
using namespace std;

int main() {
    int a = 1;
    int b;
    cin >> b;
    cout << a << ' ' << b << ' ';
    int tmp;
    while(1){
        cout << a + b << ' ';
        if(a + b >= 100){
            break;
        }
        tmp = b;
        b = a + b;
        a = tmp;
    }
    return 0;
}