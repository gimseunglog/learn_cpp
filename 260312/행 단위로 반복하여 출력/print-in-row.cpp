#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 0; i < N; i++){
        for(int j = 1; j <= N; j++){
            cout << j;
        }
        cout << endl;
    }
    return 0;
}