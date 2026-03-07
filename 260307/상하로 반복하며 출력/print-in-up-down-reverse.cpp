#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[9][9];
    for(int i = 0; i < N; i++){
        if(i % 2 == 1){
            for(int j = 0; j < N; j++){
                a[i][j] = N - j;
            }
        }
        else{
            for(int j = 0; j < N; j++){
                a[i][j] = j + 1;
            }
        }
    }
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N; j++){
            cout << a[j][i];
        }
        cout << endl;
    }
    return 0;
}