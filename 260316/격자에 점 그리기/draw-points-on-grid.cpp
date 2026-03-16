#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a[9][9] = {};
    int c = 1;
    for(int i = 0; i < M; i++){
        int x, y;
        cin >> x >> y;
        a[x - 1][y - 1] = c;
        c++;
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
    return 0;
}