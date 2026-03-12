#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    for(int i = 1; i <= N * N; i++){
        cout << cnt;
        cnt++;
        if(i % N == 0){
            cout << endl;
        }
        if(cnt > 9){
            cnt = 1;
        }
    }
    return 0;
}