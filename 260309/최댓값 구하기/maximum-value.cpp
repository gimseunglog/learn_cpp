#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    int tmp;
    if(a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
    if(b > c){
        tmp = c;
        c = b;
        b = tmp;
    }
    cout << c;

    return 0;
}