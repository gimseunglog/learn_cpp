#include <iostream>
using namespace std;

int main() {
    int a[4];
    int n;
    for(int i = 0; i < 4; i++){
        a[i] = 0;
        for(int j = 0; j < 4; j++){
            cin >> n;
            a[i] += n;
        }
    }
    for(int i = 0; i < 4; i++){
        cout << a[i] << endl;
    }
    return 0;
}