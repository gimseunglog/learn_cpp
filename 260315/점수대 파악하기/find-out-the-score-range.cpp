#include <iostream>
using namespace std;

int main() {
    int a[10];
    for(int i = 0; i < 10; i++){
        a[i] = 0;
    }
    int n;
    while(1){
        cin >> n;
        if(n == 0){
            break;
        }
        if(n == 100){
            a[9]++;
        }
        else{
            a[n / 10 - 1]++;
        }
    }
    for(int i = 10; i >= 1; i--){
        cout << i * 10 << " - " << a[i - 1] << endl;
    }
    return 0;
}