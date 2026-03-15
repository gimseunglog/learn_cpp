#include <iostream>
using namespace std;

int main() {
    int a[9];
    for(int i = 0; i < 9; i++){
        a[i] = 0;
    }
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        a[n / 10 - 1]++;
    }
    for(int i = 0; i < 9; i++){
        cout << i + 1 << " - " << a[i] << endl;
    }
    return 0;
}