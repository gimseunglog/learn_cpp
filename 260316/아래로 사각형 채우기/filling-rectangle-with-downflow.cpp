#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    for(int i = 1; i <= N; i++){
        int c = i;
        for(int j = 1; j <= N; j++){
            cout << c << ' ';
            c += N; 
        }
        cout << endl;
    }
    return 0;
}