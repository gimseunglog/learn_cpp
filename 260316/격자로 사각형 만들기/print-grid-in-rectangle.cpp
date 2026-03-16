#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[10][10] = {};
    for(int i = 0; i < N; i++){
        a[i][0] = 1;
        a[0][i] = 1;
    }
    for(int i = 1; i < N; i++){
        for(int j = 1; j < N; j++){
            a[i][j] = a[i - 1][j] + a[i][j - 1] + a[i - 1][j - 1];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}