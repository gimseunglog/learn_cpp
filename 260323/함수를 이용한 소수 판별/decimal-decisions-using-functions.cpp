#include <iostream>

using namespace std;

int prime_num(int a, int b){
    int sum = 0;
    for(int i = a; i <= b; i++){
        int cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            sum += i;
        }
    }
    return sum;
}

int a, b;

int main() {
    cin >> a >> b;
    cout << prime_num(a, b);
    return 0;
}