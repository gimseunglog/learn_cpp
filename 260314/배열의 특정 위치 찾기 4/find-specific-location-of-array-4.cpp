#include <iostream>
using namespace std;

int main() {
    int n = 1;
    int cnt = 0;
    int sum = 0;
    int a;
    for(int i = 0; i < 10; i++){
        cin >> a;
        if(a == 0){
            n = 0;
        }
        if(n && a % 2 == 0){
            sum += a;
            cnt++;
        }
    }
    cout << cnt << ' ' << sum;
    return 0;
}