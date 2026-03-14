#include <iostream>
using namespace std;

int main() {
    int a[10];
    int c = 1;
    for(int i = 0; i < 10; i++){
        cin >> a[i];
        if(c && a[i] % 3 == 0){
            cout << a[i - 1];
            c = 0;
        }
    }
    return 0;
}