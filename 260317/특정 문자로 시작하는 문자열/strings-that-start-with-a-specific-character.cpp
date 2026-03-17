#include <iostream>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    string s[20];
    for(int i = 0; i < N; i++){
        cin >> s[i];
    }
    char c;
    cin >> c;
    int cnt = 0;
    int sum = 0;
    for(int i = 0; i < N; i++){
        if(s[i][0] == c){
            cnt++;
            sum += s[i].length();
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << cnt << ' ' << (double)sum / cnt;
    return 0;
}