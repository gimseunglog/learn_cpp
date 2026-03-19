#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int sum = 0;
    int n;
    for(int i = 0; i < N; i++){
        cin >> n;
        sum += n;
    }
    string s = to_string(sum);
    cout << s.substr(1) << s[0];
    return 0;
}
