#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s = 0;
    for(int i = 1; i <= 100; i++){
        s += i;
        if(s >= N){
            cout << i;
            break;
        }
    }
    return 0;
}