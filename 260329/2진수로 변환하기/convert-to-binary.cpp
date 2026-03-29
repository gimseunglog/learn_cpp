#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int digit[100000];
    int cnt = 0;
    while(n > 0){
        digit[cnt++] = n % 2;
        n /= 2;
    }
    for(int i = cnt - 1; i >= 0; i--){
        cout << digit[i];
    }
    return 0;
}