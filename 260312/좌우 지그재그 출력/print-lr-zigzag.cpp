#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 1;
    for(int i = 0; i < N; i++){
        if(i % 2){
            cnt += N;
            for(int j = 1; j <= N; j++){
                cout << cnt - j << ' ';
            }
        }
        else{
            for(int j = 0; j < N; j++){
                cout<< cnt << ' ';
                cnt++;
            }
        }
        cout << endl;
    }
    return 0;
}