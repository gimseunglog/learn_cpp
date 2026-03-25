#include <iostream>
using namespace std;

void recursive(int N){
    if(N == 0)
        return;
    cout << N << ' ';
    recursive(N - 1);
    cout << N << ' ';
}

int main() {
    int N;
    cin >> N;
    recursive(N);
    return 0;
}