#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s[10];
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        sum += s[i].length();
        if(s[i][0] == 'a'){
            cnt++;
        }
    }
    cout << sum << ' ' << cnt;
    return 0;
}