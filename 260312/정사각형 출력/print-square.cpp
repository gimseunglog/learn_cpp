#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 1; i <= N * N; i++){
        cout << i << ' ';
        cnt++;
        if(cnt % N == 0){
            cout << endl;
        }
    }
    return 0;
}