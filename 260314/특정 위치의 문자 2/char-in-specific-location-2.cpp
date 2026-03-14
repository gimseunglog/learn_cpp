#include <iostream>
using namespace std;

int main() {
    char c[10];
    for(int i = 0; i < 10; i++){
        cin >> c[i];
    }
    cout << c[1] << ' ' << c[4] << ' ' << c[7];
    return 0;
}