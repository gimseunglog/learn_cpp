#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    int max = -1;
    int pre = 0;
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        int cur = (n > 0) ? 1 : -1;
        if(cur == pre){
            cnt++;
        }
        else{
            pre = cur;
            cnt = 1;
        }
        if(cnt > max){
            max = cnt;
        }
    }
    cout << max << endl;
    return 0;
}