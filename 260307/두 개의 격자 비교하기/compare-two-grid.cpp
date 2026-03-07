#include <iostream>
using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    int a[10][10];
    int b[10][10];
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            cin >> b[i][j];
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(a[i][j] == b[i][j]){
                cout << "0 ";
            }
            else{
                cout << "1 ";
            }
        }
        cout << endl;
    }
    return 0;
}