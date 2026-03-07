#include <iostream>
using namespace std;

int main() {
    int a[4][4];
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            cin >> a[i][j];
        }
    }
    int c = 0;
    for(int i = 0; i < 4; i++){
        for(int j = 0; j <= i; j++){
            c += a[i][j];
        }
    }
    cout << c;
    return 0;
}