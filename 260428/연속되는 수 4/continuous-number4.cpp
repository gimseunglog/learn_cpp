#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int cnt = 0;
    int max = -1;
    int pre = -1;
    for(int i = 0; i < N; i++){
        int n;
        cin >> n;
        if(n > pre){
            cnt++;
        }
        else{
            cnt = 1;
        }
        pre = n;
        max = (max < cnt) ? cnt : max;
    }
    cout << max << endl;
    return 0;
}