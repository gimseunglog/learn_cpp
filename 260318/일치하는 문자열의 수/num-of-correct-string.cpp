#include <iostream>
using namespace std;

int main() {
    string A;
    int n;
    cin >> n >> A;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(s == A){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
