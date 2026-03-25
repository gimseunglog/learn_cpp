#include <iostream>

using namespace std;

int N;

void up(int i, int N){
     if(i <= N){
        cout << i << ' ';
        up(++i, N);
     }
}

void down(int N){
    if(N > 0){
        cout << N << ' ';
        down(--N);
    }
}

int main() {
    cin >> N;

    up(1, N);
    cout << endl;
    down(N);

    return 0;
}