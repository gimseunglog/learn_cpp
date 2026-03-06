#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int C = 0;
    for(int i = 1; i <= 100; i++){
        C += i;
        if(C >= N){
            cout << i;
            break;
        }
    }
    return 0;
}