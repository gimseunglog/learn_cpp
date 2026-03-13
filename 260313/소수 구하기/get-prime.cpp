#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt;
    for(int i = 2; i <= N; i++){
        cnt = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0){
                cnt++;
            }
        }
        if(cnt == 2){
            cout << i << ' ';
        }
    }
    return 0;
}