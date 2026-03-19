#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    string s = to_string(a + b);
    int len = s.length();
    int cnt = 0;
    for(int i = 0; i < len; i++){
        if(s[i] == '1'){
            cnt++;
        }
    }
    cout << cnt;
    return 0;
}
