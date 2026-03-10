#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s = 0;
    for(int i = N; i <= 100; i++){
        s += i;
    }
    cout << s;
    return 0;
}