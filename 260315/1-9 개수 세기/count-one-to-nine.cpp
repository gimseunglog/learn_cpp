#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[100];
    for(int i = 0; i < 100; i++){
        a[i] = 0;
    }
    int b;

    for(int i = 0; i < N; i++){
        cin >> b;
        a[b - 1]++;
    }
    for(int i = 0; i < 9; i++){
        cout << a[i] << endl;
    }
    return 0;
}