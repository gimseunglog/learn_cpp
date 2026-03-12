#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 9;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << cnt;
            cnt--;
            if(cnt < 1){
                cnt = 9;
            }
        }
        cout << endl;
    }
    return 0;
}