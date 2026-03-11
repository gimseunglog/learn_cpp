#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    char c = 'P';
    for(int i = 2; i < N; i++){
        if(N % i == 0){
            c = 'C';
            break;
        }
    }
    cout << c;
    return 0;
}