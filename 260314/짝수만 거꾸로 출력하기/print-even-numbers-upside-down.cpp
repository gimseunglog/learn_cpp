#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int a[100];
    for(int i = 0; i < N; i++){
        cin >> a[i];
    }
    for(int i = N - 1; i >= 0; i--){
        if(a[i] % 2 == 0){
            cout << a[i] << ' ';
        }
    }
    return 0;
}