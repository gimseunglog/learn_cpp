#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int s = 0;
    for(int i = 1; i < N; i++){
        if(N % i == 0){
            s += i;
        }
    }
    if(N == s){
        cout << 'P';
    }
    else{
        cout << 'N';
    }
    return 0;
}