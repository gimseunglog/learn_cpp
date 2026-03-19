#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s = to_string(n);
    int len = s.length();
    int sum = 0;
    for(int i = 0; i < len; i++){
        sum += (int)s[i] - (int)'0';
    }
    cout << sum;
    return 0;
}
