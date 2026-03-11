#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;
    int c = 0;
    while(N != 1){
        if(N % 2){
            N = 3 * N + 1;
        }
        else{
            N /= 2;
        }
        c++;
    }
    cout << c;
    return 0;
}