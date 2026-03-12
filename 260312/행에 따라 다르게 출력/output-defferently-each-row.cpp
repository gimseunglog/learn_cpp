#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            if(i % 2){
                cnt += 2;
                cout << cnt << ' ';     
            }
            else{
                cnt++;
                cout << cnt << ' ';
            }

        }
        cout << endl;
    }
    return 0;
}