#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[10][10] = {};
    int nums = 1;
    int c = 1;
    for(int i = N - 1; i >= 0; i--){
        for(int j = N - 1; j >= 0; j--){
            if(c){
                a[j][i] = nums;
            }
            else{
                a[N - j - 1][i] = nums;
            }
            nums++;
        }
        if(c == 1){
            c = 0;
        }
        else{
            c = 1;
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