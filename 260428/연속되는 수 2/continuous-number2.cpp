#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    int max = -1;
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        if(n > max){
            cnt = 0;
            max = n;
        }
        else if(n == max){
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}