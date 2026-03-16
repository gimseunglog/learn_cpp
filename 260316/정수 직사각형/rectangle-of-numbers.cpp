#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a[100][100];
    int c = 1;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            a[i][j] = c;
            c++;
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}