#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    while(N < 1000){
        if(N % 2){
            N = 2 * N + 2;
        }
        else{
            N = 3 * N + 1;
        }
        cnt++;
    }
    cout << cnt;
    return 0;
}