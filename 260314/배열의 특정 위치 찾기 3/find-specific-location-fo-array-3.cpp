#include <iostream>
using namespace std;

int main() {
    int a[100];
    for(int i = 0; i < 100; i++){
        cin >> a[i];
        if(a[i] == 0){
            cout << a[i - 1] + a[i - 2] + a[i - 3];
            break;
        }
    }
    return 0;
}