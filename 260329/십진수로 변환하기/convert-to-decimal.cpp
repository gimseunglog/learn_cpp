#include <iostream>
using namespace std;


int main() {
    int n;
    int a[8] = {0};
    int cnt = 0;
    int num = 0;
    
    cin >> n;

    while(true){
        if(n == 0){
            a[cnt++] = n;
            break;
        }
        a[cnt++] = n % 10;
        n /= 10;
    }

    for(int i = cnt - 1; i >= 0; i--){
        num = num * 2 + a[i];
    }

    cout << num;
    return 0;
}