#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int max = -1;
    int cnt = 0;
    int pre = -1;
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        if(n != pre){
            if(cnt > max){
                max = cnt;
            }
            cnt = 1;
            pre = n;
        }
        else{
            cnt++;
        }
    }
    if(cnt > max){
        max = cnt;
    }
    cout << max << endl;
    return 0;
}