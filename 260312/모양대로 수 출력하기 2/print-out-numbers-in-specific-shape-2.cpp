#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 2;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << cnt << ' ';
            cnt += 2;
            if(cnt > 8){
                cnt = 2;
            }
        }
        cout << endl;
    }
    return 0;
}