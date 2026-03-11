#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int S = N;
    for(int i = 1; i <= N; i++){
        S /= i;
        if(S <= 1){
            cout << i;
            break;
        }
    }
    return 0;
}