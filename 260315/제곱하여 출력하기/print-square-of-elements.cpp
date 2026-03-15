#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a;
    for(int i = 0; i < N; i++){
        cin >> a;
        cout << a * a << ' ';
    }
    return 0;
}